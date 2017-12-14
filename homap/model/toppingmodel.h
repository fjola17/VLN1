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
#include "../template/topping.h"
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
