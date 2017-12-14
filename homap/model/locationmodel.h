#ifndef LOCATIONMODEL_H
#define LOCATIONMODEL_H

/*

    General

*/
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
/*

    Template

*/
#include "../template/location.h"
/*

    View

*/
#include "../view/adminview.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;
using namespace AdminView;

class LocationModel
{
    public:
        LocationModel();
        virtual ~LocationModel();

        void writeLocation(Location loc);
        vector<Location> readLocations();
        Location selectLocation();
};

#endif // LOCATIONMODEL_H
