#ifndef PIZZA_H
#define PIZZA_H

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

using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        int price;
        int inches;
        char name[50];
        int sizeOfToppings;
        Topping toppings[20];
};

#endif // PIZZA_H
