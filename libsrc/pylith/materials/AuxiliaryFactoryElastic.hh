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

/** @file libsrc/materials/AuxiliaryFactoryElastic.hh
 *
 * @brief C++ helper class for setting up auxiliary subfields for elastic materials.
 */

#if !defined(pylith_materials_auxiliaryfactory_hh)
#define pylith_materials_auxiliaryfactory_hh

#include "materialsfwd.hh" // forward declarations
#include "pylith/feassemble/AuxiliaryFactory.hh" // ISA AuxiliaryFactory

#include "spatialdata/spatialdb/spatialdbfwd.hh" // USES GravityField

class pylith::materials::AuxiliaryFactoryElastic : public pylith::feassemble::AuxiliaryFactory {
    friend class TestAuxiliaryFactoryElastic; // unit testing

    // PUBLIC METHODS //////////////////////////////////////////////////////////////////////////////////////////////////
public:

    /// Default constructor.
    AuxiliaryFactoryElastic(void);

    /// Destructor.
    ~AuxiliaryFactoryElastic(void);

    /// Add density subfield to auxiliary subfields.
    void addDensity(void);

    /// Add shear modulus subfield to auxiliary subfields.
    void addShearModulus(void);

    /// Add bulk subfield to auxiliary subfields.
    void addBulkModulus(void);

    /** Add gravity subfield to auxiliary subfields.
     *
     * @param[in] gf Gravity field.
     */
    void addGravityField(spatialdata::spatialdb::GravityField* gf);

    /// Add body force subfield to auxiliary subfields.
    void addBodyForce(void);

    /// Add reference stress subfield to auxiliary subfields.
    void addReferenceStress(void);

    /// Add reference strain subfield to auxiliary subfields.
    void addReferenceStrain(void);

    // NOT IMPLEMENTED /////////////////////////////////////////////////////////////////////////////////////////////////
private:

    AuxiliaryFactoryElastic(const AuxiliaryFactoryElastic &); ///< Not implemented.
    const AuxiliaryFactoryElastic& operator=(const AuxiliaryFactoryElastic&); ///< Not implemented

}; // class AuxiliaryFactoryElastic

#endif // pylith_materials_auxiliaryfactory_hh

// End of file
