// -*- C++ -*-
//
// ----------------------------------------------------------------------
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2017 University of California, Davis
//
// See COPYING for license information.
//
// ----------------------------------------------------------------------
//

#include <portinfo>

#include "KinSrcBrune.hh" // implementation of object methods

#include "pylith/faults/KinSrcAuxiliaryFactory.hh" // USES KinSrcAuxiliaryFactory

#include "pylith/utils/journals.hh" // USES PYLITH_COMPONENT_*
#include "pylith/utils/error.hh" // USES PYLITH_METHOD_BEGIN/END

#include "spatialdata/geocoords/CoordSys.hh" // USES CoordSys

#include <cassert> // USES assert()

// ---------------------------------------------------------------------------------------------------------------------
// Default constructor.
pylith::faults::KinSrcBrune::KinSrcBrune(void) {
    pylith::utils::PyreComponent::setName("kinsrcbrune");
} // constructor


// ---------------------------------------------------------------------------------------------------------------------
// Destructor.
pylith::faults::KinSrcBrune::~KinSrcBrune(void) {}


// ---------------------------------------------------------------------------------------------------------------------
// Slip time function kernel.
void
pylith::faults::KinSrcBrune::slipFn(const PylithInt dim,
                                    const PylithInt numS,
                                    const PylithInt numA,
                                    const PylithInt sOff[],
                                    const PylithInt sOff_x[],
                                    const PylithScalar s[],
                                    const PylithScalar s_t[],
                                    const PylithScalar s_x[],
                                    const PylithInt aOff[],
                                    const PylithInt aOff_x[],
                                    const PylithScalar a[],
                                    const PylithScalar a_t[],
                                    const PylithScalar a_x[],
                                    const PylithReal t,
                                    const PylithScalar x[],
                                    const PylithInt numConstants,
                                    const PylithScalar constants[],
                                    PylithScalar slip[]) {
    const PylithInt _numA = 3;

    assert(_numA == numA);
    assert(aOff);
    assert(a);
    assert(slip);

    const PylithInt i_initiationTime = 0;
    const PylithInt i_finalSlip = 1;
    const PylithInt i_riseTime = 2;
    const PylithScalar initiationTime = a[aOff[i_initiationTime]];
    const PylithScalar* finalSlip = &a[aOff[i_finalSlip]];
    const PylithScalar riseTime = a[aOff[i_riseTime]];

    const PylithInt i_originTime = 0;
    const PylithScalar originTime = constants[i_originTime];
    const PylithScalar t0 = originTime + initiationTime;

    if (t >= t0) {
        const PylithScalar tau = 0.21081916 * riseTime;
        for (PylithInt i = 0; i < dim; ++i) {
            slip[i] = finalSlip[i] * (1.0 - exp(-(t-t0)/tau) * (1.0 + (t-t0)/tau));
        } // for
    } // if

} // slipFn


// ---------------------------------------------------------------------------------------------------------------------
// Preinitialize earthquake source. Set names/sizes of auxiliary subfields.
void
pylith::faults::KinSrcBrune::_auxiliaryFieldSetup(const spatialdata::units::Nondimensional& normalizer,
                                                  const spatialdata::geocoords::CoordSys* cs) {
    PYLITH_METHOD_BEGIN;
    PYLITH_COMPONENT_DEBUG("_auxiliaryFieldSetup()");

    assert(_auxiliaryFactory);
    assert(cs);
    _auxiliaryFactory->initialize(_auxiliaryField, normalizer, cs->getSpaceDim());

    // :ATTENTION: The order for adding subfields must match the order of the auxiliary fields in the slip time function
    // kernel.

    _auxiliaryFactory->addInitiationTime(); // 0
    _auxiliaryFactory->addFinalSlip(); // 1
    _auxiliaryFactory->addRiseTime(); // 2

    _slipFnKernel = pylith::faults::KinSrcBrune::slipFn;

    PYLITH_METHOD_END;
} // _auxiliaryFieldSetup


// End of file