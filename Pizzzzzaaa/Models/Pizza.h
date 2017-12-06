#ifndef PIZZA_H
#define PIZZA_H

#include "Topping.h"
#include <iostream>
#include <string>
using namespace std;

class Pizza
{
    public:
        Pizza(string name, int price, vector<Topping> toppings);
        virtual ~Pizza();

    protected:

    private:
        string name;
        int price;
        vector<Topping> toppings;
};

#endif // PIZZA_H
