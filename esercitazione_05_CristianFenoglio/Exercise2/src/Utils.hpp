#pragma once

#include <iostream>
#include "PolygonalMesh.hpp"

using namespace std;

namespace PolygonalLibrary
{
//conrtollo errore di importazione 
bool ImportMesh(PolygonalMesh& mesh);

bool ImportCell0Ds(PolygonalMesh& mesh);

bool ImportCell1Ds(PolygonalMesh& mesh);

bool ImportCell2Ds(PolygonalMesh& mesh);

}