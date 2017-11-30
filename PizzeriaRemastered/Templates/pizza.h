#ifndef PIZZA_H
#define PIZZA_H

#include "topping.h"
#include <string>
#include <vector>

/*

    This is a Pizza template
    No need to change for now

*/

class Pizza
{
    public:
        Pizza(string n, int p, vector<Topping> t);
        virtual ~Pizza();

    protected:

    private:
        std::string name;
        int price;
        std::vector<Topping> toppings;
};

#endif // PIZZA_H
