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

        Pizza processRegisterPizza(int in);
        void processPizzaMenu();

        //void newPizza();

    protected:

    private:
        //Random pizza toppings and types in the vecors are in here
        vector<Topping> toppings = {new Topping("Hair", 300), new Topping("Potion", 300)};
        vector<Pizza> types = { new Pizza("Super Saiyan", 9001, {this->toppings[0]}), new Pizza("Crazy Scientist", 1337, {this->toppings[1]})};
};

#endif // PIZZAMODEL_H
