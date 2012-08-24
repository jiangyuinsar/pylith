// -*- C++ -*-
//
// ======================================================================
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2012 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application elasticityexplicitapp.

#include "ElasticityExplicitGravData3DQuadratic.hh"

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_spaceDim = 3;

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_cellDim = 3;

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_numVertices = 10;

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_numCells = 1;

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_numBasis = 10;

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_numQuadPts = 4;

const char* pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_matType = "ElasticIsotropic3D";

const char* pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_matDBFilename = "data/elasticisotropic3d.spatialdb";

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_matId = 0;

const char* pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_matLabel = "elastic isotropic 3-D";

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_dt =   1.00000000e-02;

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_dtStableExplicit =   9.81816592e-06;

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_gravityVec[] = {
  0.00000000e+00,  0.00000000e+00, -1.00000000e+08,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_vertices[] = {
 -5.00000000e-01, -2.00000000e+00, -1.00000000e+00,
  2.00000000e+00, -2.00000000e+00, -5.00000000e-01,
  1.00000000e+00,  1.00000000e+00,  0.00000000e+00,
  2.00000000e-01,  5.00000000e-01,  2.00000000e+00,
  1.50000000e+00, -5.00000000e-01, -2.50000000e-01,
  2.50000000e-01, -5.00000000e-01, -5.00000000e-01,
  7.50000000e-01, -2.00000000e+00, -7.50000000e-01,
 -1.50000000e-01, -7.50000000e-01,  5.00000000e-01,
  1.10000000e+00, -7.50000000e-01,  7.50000000e-01,
  6.00000000e-01,  7.50000000e-01,  1.00000000e+00,
};

const int pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_cells[] = {
0,1,2,3,4,5,6,7,8,9,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_verticesRef[] = {
 -1.00000000e+00, -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00, -1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00, -1.00000000e+00,  1.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  0.00000000e+00, -1.00000000e+00,
  0.00000000e+00, -1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00, -1.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -1.00000000e+00,  0.00000000e+00,
 -1.00000000e+00,  0.00000000e+00,  0.00000000e+00,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_quadPts[] = {
 -8.00000000e-01, -8.00000000e-01, -8.00000000e-01,
  5.00000000e-01, -8.00000000e-01, -8.00000000e-01,
 -8.00000000e-01,  5.00000000e-01, -8.00000000e-01,
 -8.00000000e-01, -8.00000000e-01,  5.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_quadWts[] = {
  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_basis[] = {
  2.80000000e-01, -8.00000000e-02, -8.00000000e-02,
 -8.00000000e-02,  4.00000000e-02,  2.80000000e-01,
  2.80000000e-01,  2.80000000e-01,  4.00000000e-02,
  4.00000000e-02, -4.50000000e-02,  3.75000000e-01,
 -8.00000000e-02, -8.00000000e-02,  3.00000000e-01,
  2.00000000e-02,  1.50000000e-01,  2.00000000e-02,
  3.00000000e-01,  4.00000000e-02, -4.50000000e-02,
 -8.00000000e-02,  3.75000000e-01, -8.00000000e-02,
  3.00000000e-01,  1.50000000e-01,  2.00000000e-02,
  2.00000000e-02,  4.00000000e-02,  3.00000000e-01,
 -4.50000000e-02, -8.00000000e-02, -8.00000000e-02,
  3.75000000e-01,  4.00000000e-02,  2.00000000e-02,
  2.00000000e-02,  1.50000000e-01,  3.00000000e-01,
  3.00000000e-01,};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_basisDerivRef[] = {
 -9.00000000e-01, -9.00000000e-01, -9.00000000e-01,
 -3.00000000e-01,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.00000000e-01,
  2.00000000e-01,  2.00000000e-01,  0.00000000e+00,
 -2.00000000e-01,  1.20000000e+00, -2.00000000e-01,
  1.20000000e+00, -2.00000000e-01, -2.00000000e-01,
 -2.00000000e-01, -2.00000000e-01,  1.20000000e+00,
  2.00000000e-01,  0.00000000e+00,  2.00000000e-01,
  0.00000000e+00,  2.00000000e-01,  2.00000000e-01,
  4.00000000e-01,  4.00000000e-01,  4.00000000e-01,
  1.00000000e+00,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.00000000e-01,
  2.00000000e-01,  1.50000000e+00,  0.00000000e+00,
 -2.00000000e-01, -1.00000000e-01, -2.00000000e-01,
 -1.40000000e+00, -1.50000000e+00, -1.50000000e+00,
 -2.00000000e-01, -2.00000000e-01, -1.00000000e-01,
  2.00000000e-01,  0.00000000e+00,  1.50000000e+00,
  0.00000000e+00,  2.00000000e-01,  2.00000000e-01,
  4.00000000e-01,  4.00000000e-01,  4.00000000e-01,
 -3.00000000e-01,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  1.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.00000000e-01,
  1.50000000e+00,  2.00000000e-01,  0.00000000e+00,
 -1.50000000e+00, -1.40000000e+00, -1.50000000e+00,
 -1.00000000e-01, -2.00000000e-01, -2.00000000e-01,
 -2.00000000e-01, -2.00000000e-01, -1.00000000e-01,
  2.00000000e-01,  0.00000000e+00,  2.00000000e-01,
  0.00000000e+00,  2.00000000e-01,  1.50000000e+00,
  4.00000000e-01,  4.00000000e-01,  4.00000000e-01,
 -3.00000000e-01,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  1.00000000e+00,
  2.00000000e-01,  2.00000000e-01,  0.00000000e+00,
 -2.00000000e-01, -1.00000000e-01, -2.00000000e-01,
 -1.00000000e-01, -2.00000000e-01, -2.00000000e-01,
 -1.50000000e+00, -1.50000000e+00, -1.40000000e+00,
  1.50000000e+00,  0.00000000e+00,  2.00000000e-01,
  0.00000000e+00,  1.50000000e+00,  2.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_fieldTIncr[] = {
  3.00000000e-01, -4.00000000e-01, -4.00000000e-01,
 -6.00000000e-01,  8.00000000e-01,  2.00000000e-01,
  5.00000000e-01,  5.00000000e-01,  7.00000000e-01,
 -7.00000000e-01, -5.00000000e-01, -7.00000000e-01,
 -6.00000000e-01, -3.00000000e-01,  8.00000000e-01,
 -4.00000000e-01, -8.00000000e-01, -5.00000000e-01,
  7.00000000e-01,  8.00000000e-01, -5.00000000e-01,
 -5.00000000e-01, -5.00000000e-01, -7.00000000e-01,
 -3.00000000e-01, -9.00000000e-01,  8.00000000e-01,
 -1.00000000e-01,  5.00000000e-01, -9.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_fieldT[] = {
  1.00000000e-01, -2.00000000e-01, -6.00000000e-01,
 -3.00000000e-01,  4.00000000e-01,  9.00000000e-01,
  6.00000000e-01,  8.00000000e-01,  5.00000000e-01,
 -8.00000000e-01, -6.00000000e-01, -8.00000000e-01,
 -0.00000000e+00, -2.00000000e-01,  6.00000000e-01,
 -4.00000000e-01, -7.00000000e-01, -2.00000000e-01,
  7.00000000e-01,  6.00000000e-01, -1.00000000e-01,
 -4.00000000e-01, -3.00000000e-01, -3.00000000e-01,
 -7.00000000e-01, -6.00000000e-01,  1.00000000e-01,
 -9.00000000e-01,  3.00000000e-01, -8.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_fieldTmdt[] = {
  2.00000000e-01, -3.00000000e-01, -1.00000000e-01,
 -4.00000000e-01,  2.00000000e-01,  3.00000000e-01,
 -5.00000000e-01,  2.00000000e-01,  2.00000000e-01,
 -3.00000000e-01, -8.00000000e-01, -3.00000000e-01,
 -5.00000000e-01, -9.00000000e-01,  4.00000000e-01,
 -3.00000000e-01, -6.00000000e-01, -8.00000000e-01,
  9.00000000e-01,  5.00000000e-01, -2.00000000e-01,
 -7.00000000e-01, -2.00000000e-01, -9.00000000e-01,
 -5.00000000e-01, -8.00000000e-01,  4.00000000e-01,
 -4.00000000e-01,  5.00000000e-01, -7.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_valsResidual[] = {
  2.17054586e+10, -1.01739898e+10, -3.79635409e+09,
  6.44485026e+10, -2.49355435e+10, -1.74360335e+10,
 -4.99706922e+10, -5.58679967e+10, -5.85992435e+10,
 -9.94786340e+09,  4.42029024e+10, -6.49170866e+10,
 -7.06409419e+09,  6.20990315e+10, -1.22648580e+11,
  7.08323019e+10,  1.17494841e+11, -1.23397808e+11,
 -9.85096504e+10, -5.58231405e+10, -1.09044759e+11,
 -1.35961925e+10, -6.36499481e+10, -7.24518425e+10,
 -3.55911964e+10,  5.53493739e+10, -1.15258001e+11,
  5.77073439e+10, -6.86734841e+10, -2.38942097e+10,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_valsJacobian[] = {
  1.50251107e+06,  0.00000000e+00,  0.00000000e+00,
 -5.70500651e+05,  0.00000000e+00,  0.00000000e+00,
 -5.70500651e+05,  0.00000000e+00,  0.00000000e+00,
 -5.70500651e+05,  0.00000000e+00,  0.00000000e+00,
 -3.13041667e+05,  0.00000000e+00,  0.00000000e+00,
  1.24238411e+06,  0.00000000e+00,  0.00000000e+00,
  1.24238411e+06,  0.00000000e+00,  0.00000000e+00,
  1.24238411e+06,  0.00000000e+00,  0.00000000e+00,
 -3.13041667e+05,  0.00000000e+00,  0.00000000e+00,
 -3.13041667e+05,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  1.50251107e+06,  0.00000000e+00,
  0.00000000e+00, -5.70500651e+05,  0.00000000e+00,
  0.00000000e+00, -5.70500651e+05,  0.00000000e+00,
  0.00000000e+00, -5.70500651e+05,  0.00000000e+00,
  0.00000000e+00, -3.13041667e+05,  0.00000000e+00,
  0.00000000e+00,  1.24238411e+06,  0.00000000e+00,
  0.00000000e+00,  1.24238411e+06,  0.00000000e+00,
  0.00000000e+00,  1.24238411e+06,  0.00000000e+00,
  0.00000000e+00, -3.13041667e+05,  0.00000000e+00,
  0.00000000e+00, -3.13041667e+05,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  1.50251107e+06,
  0.00000000e+00,  0.00000000e+00, -5.70500651e+05,
  0.00000000e+00,  0.00000000e+00, -5.70500651e+05,
  0.00000000e+00,  0.00000000e+00, -5.70500651e+05,
  0.00000000e+00,  0.00000000e+00, -3.13041667e+05,
  0.00000000e+00,  0.00000000e+00,  1.24238411e+06,
  0.00000000e+00,  0.00000000e+00,  1.24238411e+06,
  0.00000000e+00,  0.00000000e+00,  1.24238411e+06,
  0.00000000e+00,  0.00000000e+00, -3.13041667e+05,
  0.00000000e+00,  0.00000000e+00, -3.13041667e+05,
 -5.70500651e+05,  0.00000000e+00,  0.00000000e+00,
  2.84272070e+06,  0.00000000e+00,  0.00000000e+00,
 -8.39520833e+05,  0.00000000e+00,  0.00000000e+00,
 -8.39520833e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
  5.45154948e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
 -6.43869792e+05,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -5.70500651e+05,  0.00000000e+00,
  0.00000000e+00,  2.84272070e+06,  0.00000000e+00,
  0.00000000e+00, -8.39520833e+05,  0.00000000e+00,
  0.00000000e+00, -8.39520833e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00,  5.45154948e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00, -6.43869792e+05,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -5.70500651e+05,
  0.00000000e+00,  0.00000000e+00,  2.84272070e+06,
  0.00000000e+00,  0.00000000e+00, -8.39520833e+05,
  0.00000000e+00,  0.00000000e+00, -8.39520833e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00,  5.45154948e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00, -6.43869792e+05,
 -5.70500651e+05,  0.00000000e+00,  0.00000000e+00,
 -8.39520833e+05,  0.00000000e+00,  0.00000000e+00,
  2.84272070e+06,  0.00000000e+00,  0.00000000e+00,
 -8.39520833e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  5.45154948e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
 -6.43869792e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -5.70500651e+05,  0.00000000e+00,
  0.00000000e+00, -8.39520833e+05,  0.00000000e+00,
  0.00000000e+00,  2.84272070e+06,  0.00000000e+00,
  0.00000000e+00, -8.39520833e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  5.45154948e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00, -6.43869792e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -5.70500651e+05,
  0.00000000e+00,  0.00000000e+00, -8.39520833e+05,
  0.00000000e+00,  0.00000000e+00,  2.84272070e+06,
  0.00000000e+00,  0.00000000e+00, -8.39520833e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00,  5.45154948e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00, -6.43869792e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
 -5.70500651e+05,  0.00000000e+00,  0.00000000e+00,
 -8.39520833e+05,  0.00000000e+00,  0.00000000e+00,
 -8.39520833e+05,  0.00000000e+00,  0.00000000e+00,
  2.84272070e+06,  0.00000000e+00,  0.00000000e+00,
 -6.43869792e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
  5.45154948e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -5.70500651e+05,  0.00000000e+00,
  0.00000000e+00, -8.39520833e+05,  0.00000000e+00,
  0.00000000e+00, -8.39520833e+05,  0.00000000e+00,
  0.00000000e+00,  2.84272070e+06,  0.00000000e+00,
  0.00000000e+00, -6.43869792e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00,  5.45154948e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -5.70500651e+05,
  0.00000000e+00,  0.00000000e+00, -8.39520833e+05,
  0.00000000e+00,  0.00000000e+00, -8.39520833e+05,
  0.00000000e+00,  0.00000000e+00,  2.84272070e+06,
  0.00000000e+00,  0.00000000e+00, -6.43869792e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00,  5.45154948e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
 -3.13041667e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
 -6.43869792e+05,  0.00000000e+00,  0.00000000e+00,
  3.25847917e+06,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  5.19364583e+05,  0.00000000e+00,  0.00000000e+00,
  2.05611458e+06,  0.00000000e+00,  0.00000000e+00,
  2.05611458e+06,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.13041667e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00, -6.43869792e+05,  0.00000000e+00,
  0.00000000e+00,  3.25847917e+06,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  5.19364583e+05,  0.00000000e+00,
  0.00000000e+00,  2.05611458e+06,  0.00000000e+00,
  0.00000000e+00,  2.05611458e+06,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.13041667e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00, -6.43869792e+05,
  0.00000000e+00,  0.00000000e+00,  3.25847917e+06,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  5.19364583e+05,
  0.00000000e+00,  0.00000000e+00,  2.05611458e+06,
  0.00000000e+00,  0.00000000e+00,  2.05611458e+06,
  1.24238411e+06,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
  5.45154948e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  1.80888281e+06,  0.00000000e+00,  0.00000000e+00,
  1.50829167e+06,  0.00000000e+00,  0.00000000e+00,
  1.50829167e+06,  0.00000000e+00,  0.00000000e+00,
  5.19364583e+05,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  1.24238411e+06,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00,  5.45154948e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  1.80888281e+06,  0.00000000e+00,
  0.00000000e+00,  1.50829167e+06,  0.00000000e+00,
  0.00000000e+00,  1.50829167e+06,  0.00000000e+00,
  0.00000000e+00,  5.19364583e+05,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  1.24238411e+06,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00,  5.45154948e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  1.80888281e+06,
  0.00000000e+00,  0.00000000e+00,  1.50829167e+06,
  0.00000000e+00,  0.00000000e+00,  1.50829167e+06,
  0.00000000e+00,  0.00000000e+00,  5.19364583e+05,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  1.24238411e+06,  0.00000000e+00,  0.00000000e+00,
  5.45154948e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  1.50829167e+06,  0.00000000e+00,  0.00000000e+00,
  1.80888281e+06,  0.00000000e+00,  0.00000000e+00,
  1.50829167e+06,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  5.19364583e+05,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  1.24238411e+06,  0.00000000e+00,
  0.00000000e+00,  5.45154948e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  1.50829167e+06,  0.00000000e+00,
  0.00000000e+00,  1.80888281e+06,  0.00000000e+00,
  0.00000000e+00,  1.50829167e+06,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  5.19364583e+05,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  1.24238411e+06,
  0.00000000e+00,  0.00000000e+00,  5.45154948e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  1.50829167e+06,
  0.00000000e+00,  0.00000000e+00,  1.80888281e+06,
  0.00000000e+00,  0.00000000e+00,  1.50829167e+06,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  5.19364583e+05,
  1.24238411e+06,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
 -5.06914062e+05,  0.00000000e+00,  0.00000000e+00,
  5.45154948e+05,  0.00000000e+00,  0.00000000e+00,
  5.19364583e+05,  0.00000000e+00,  0.00000000e+00,
  1.50829167e+06,  0.00000000e+00,  0.00000000e+00,
  1.50829167e+06,  0.00000000e+00,  0.00000000e+00,
  1.80888281e+06,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  1.24238411e+06,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00, -5.06914062e+05,  0.00000000e+00,
  0.00000000e+00,  5.45154948e+05,  0.00000000e+00,
  0.00000000e+00,  5.19364583e+05,  0.00000000e+00,
  0.00000000e+00,  1.50829167e+06,  0.00000000e+00,
  0.00000000e+00,  1.50829167e+06,  0.00000000e+00,
  0.00000000e+00,  1.80888281e+06,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  1.24238411e+06,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00, -5.06914062e+05,
  0.00000000e+00,  0.00000000e+00,  5.45154948e+05,
  0.00000000e+00,  0.00000000e+00,  5.19364583e+05,
  0.00000000e+00,  0.00000000e+00,  1.50829167e+06,
  0.00000000e+00,  0.00000000e+00,  1.50829167e+06,
  0.00000000e+00,  0.00000000e+00,  1.80888281e+06,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
 -3.13041667e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
 -6.43869792e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  2.05611458e+06,  0.00000000e+00,  0.00000000e+00,
  5.19364583e+05,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  3.25847917e+06,  0.00000000e+00,  0.00000000e+00,
  2.05611458e+06,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.13041667e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00, -6.43869792e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  2.05611458e+06,  0.00000000e+00,
  0.00000000e+00,  5.19364583e+05,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  3.25847917e+06,  0.00000000e+00,
  0.00000000e+00,  2.05611458e+06,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.13041667e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00, -6.43869792e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00,  2.05611458e+06,
  0.00000000e+00,  0.00000000e+00,  5.19364583e+05,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  3.25847917e+06,
  0.00000000e+00,  0.00000000e+00,  2.05611458e+06,
 -3.13041667e+05,  0.00000000e+00,  0.00000000e+00,
 -6.43869792e+05,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  1.46026823e+06,  0.00000000e+00,  0.00000000e+00,
  2.05611458e+06,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  5.19364583e+05,  0.00000000e+00,  0.00000000e+00,
  1.12054688e+06,  0.00000000e+00,  0.00000000e+00,
  2.05611458e+06,  0.00000000e+00,  0.00000000e+00,
  3.25847917e+06,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.13041667e+05,  0.00000000e+00,
  0.00000000e+00, -6.43869792e+05,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  1.46026823e+06,  0.00000000e+00,
  0.00000000e+00,  2.05611458e+06,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  5.19364583e+05,  0.00000000e+00,
  0.00000000e+00,  1.12054688e+06,  0.00000000e+00,
  0.00000000e+00,  2.05611458e+06,  0.00000000e+00,
  0.00000000e+00,  3.25847917e+06,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.13041667e+05,
  0.00000000e+00,  0.00000000e+00, -6.43869792e+05,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00,  1.46026823e+06,
  0.00000000e+00,  0.00000000e+00,  2.05611458e+06,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  5.19364583e+05,
  0.00000000e+00,  0.00000000e+00,  1.12054688e+06,
  0.00000000e+00,  0.00000000e+00,  2.05611458e+06,
  0.00000000e+00,  0.00000000e+00,  3.25847917e+06,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_valsResidualLumped[] = {
  2.17058857e+10, -1.01733961e+10, -3.80035653e+09,
  6.44476753e+10, -2.49368998e+10, -1.74325480e+10,
 -4.99716018e+10, -5.58679351e+10, -5.85992570e+10,
 -9.94668247e+09,  4.42023005e+10, -6.49170271e+10,
 -7.05539536e+09,  6.21081750e+10, -1.22655747e+11,
  7.08342077e+10,  1.17498347e+11, -1.23392474e+11,
 -9.85178213e+10, -5.58312633e+10, -1.09043154e+11,
 -1.35892352e+10, -6.36495517e+10, -7.24452276e+10,
 -3.55928489e+10,  5.53585245e+10, -1.15271997e+11,
  5.76997342e+10, -6.86862545e+10, -2.38861279e+10,
};

const PylithScalar pylith::feassemble::ElasticityExplicitGravData3DQuadratic::_valsJacobianLumped[] = {
  2.57903646e+06,  2.57903646e+06,  2.57903646e+06,
  2.40117187e+06,  2.40117187e+06,  2.40117187e+06,
  2.40117187e+06,  2.40117187e+06,  2.40117187e+06,
  2.40117188e+06,  2.40117188e+06,  2.40117188e+06,
  1.20947917e+07,  1.20947917e+07,  1.20947917e+07,
  8.35963542e+06,  8.35963542e+06,  8.35963542e+06,
  8.35963542e+06,  8.35963542e+06,  8.35963542e+06,
  8.35963542e+06,  8.35963542e+06,  8.35963542e+06,
  1.20947917e+07,  1.20947917e+07,  1.20947917e+07,
  1.20947917e+07,  1.20947917e+07,  1.20947917e+07,
};

pylith::feassemble::ElasticityExplicitGravData3DQuadratic::ElasticityExplicitGravData3DQuadratic(void)
{ // constructor
  spaceDim = _spaceDim;
  cellDim = _cellDim;
  numVertices = _numVertices;
  numCells = _numCells;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  matType = const_cast<char*>(_matType);
  matDBFilename = const_cast<char*>(_matDBFilename);
  matId = _matId;
  matLabel = const_cast<char*>(_matLabel);
  dt = _dt;
  dtStableExplicit = _dtStableExplicit;
  gravityVec = const_cast<PylithScalar*>(_gravityVec);
  vertices = const_cast<PylithScalar*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<PylithScalar*>(_verticesRef);
  quadPts = const_cast<PylithScalar*>(_quadPts);
  quadWts = const_cast<PylithScalar*>(_quadWts);
  basis = const_cast<PylithScalar*>(_basis);
  basisDerivRef = const_cast<PylithScalar*>(_basisDerivRef);
  fieldTIncr = const_cast<PylithScalar*>(_fieldTIncr);
  fieldT = const_cast<PylithScalar*>(_fieldT);
  fieldTmdt = const_cast<PylithScalar*>(_fieldTmdt);
  valsResidual = const_cast<PylithScalar*>(_valsResidual);
  valsJacobian = const_cast<PylithScalar*>(_valsJacobian);
  valsResidualLumped = const_cast<PylithScalar*>(_valsResidualLumped);
  valsJacobianLumped = const_cast<PylithScalar*>(_valsJacobianLumped);
} // constructor

pylith::feassemble::ElasticityExplicitGravData3DQuadratic::~ElasticityExplicitGravData3DQuadratic(void)
{}


// End of file
