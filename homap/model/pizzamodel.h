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
#include <pizza.h>
#include <topping.h>
/*

    Global Tools

*/
#include <globaltools.h>

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

    protected:

    private:
};

#endif // PIZZAMODEL_H
