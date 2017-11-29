#ifndef PIZZA_H
#define PIZZA_H

#include "Toppings.h"
#include <iostream>
#include <fstream>

using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();
        int getsize();
        double getprize();
        //need to put something about overloading operators here???

    protected:

    private:
        int size;
        double prize;
        string name;
};

#endif // PIZZA_H
