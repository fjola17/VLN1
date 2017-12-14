#ifndef PIZZAMODEL_H
#define PIZZAMODEL_H

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
#include "../template/pizza.h"
#include "../template/topping.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;

class PizzaModel
{
    public:
        PizzaModel();
        virtual ~PizzaModel();

        void writePizza(Pizza piz);
        int selectInches();
        vector<Pizza> readPizzaMenu();
        void cleanPizza();

    protected:

    private:
};

#endif // PIZZAMODEL_H
