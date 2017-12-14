#ifndef TOPPINGMODEL_H
#define TOPPINGMODEL_H

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
#include <topping.h>
/*

    View

*/
#include <adminview.h>
/*

    Global Tools

*/
#include <globaltools.h>

using namespace std;
using namespace GlobalTools;

class ToppingModel
{
    public:
        ToppingModel();
        virtual ~ToppingModel();

        void writeTopping(Topping top);
        vector<Topping> selectTopping();
        vector<Topping> readToppings();
};

#endif // TOPPINGMODEL_H
