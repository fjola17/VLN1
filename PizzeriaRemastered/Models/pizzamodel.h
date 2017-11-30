#ifndef PIZZAMODEL_H
#define PIZZAMODEL_H

#include "mainview.h"
#include "pizza.h"
#include "pizza.h"
#include <vector>

class PizzaModel : private MainView
{
    public:
        PizzaModel();
        virtual ~PizzaModel();

        void processRegisterPizza();

    protected:

    private:
        vector<Pizza> types = { new Pizza("Super Saiyan", 9001, {new Topping("Hair", 300)}), new Pizza("Crazy Scientist", 1337, {new Topping("Potion", 300)})};
};

#endif // PIZZAMODEL_H
