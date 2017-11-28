#ifndef PIZZA_H
#define PIZZA_H

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
        char[20] toppings; //character array to get the name of a topping
};

#endif // PIZZA_H
