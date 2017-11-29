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
        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, Pizza& pizza);


    protected:

    private:
        int size;
        double prize;
        string name;
        Toppings* topping;
};

#endif // PIZZA_H
