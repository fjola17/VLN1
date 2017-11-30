#ifndef PIZZAMODEL_H
#define PIZZAMODEL_H

#include "mainview.h"
#include "pizza.h"
#include <vector>

class PizzaModel : private MainView
{
    public:
        PizzaModel();
        virtual ~PizzaModel();

        void processRegisterPizza();
        //void newPizza();

    protected:

    private:
        vector<Pizza> types = { new Pizza(), new Pizza()}
};

#endif // PIZZAMODEL_H
