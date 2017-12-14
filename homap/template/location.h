#ifndef LOCATION_H
#define LOCATION_H

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
#include "topping.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;

class Location
{
    public:
        Location();
        Location(char add[50]);
        virtual ~Location();

        friend ostream& operator << (ostream& out, Location& loc);
        friend istream& operator >> (istream& in, Location& loc);

        char address[50];
};

#endif // LOCATION_H
