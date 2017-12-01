#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(string name, int price);
        virtual ~Pizza();
        string name;
        int price;

    protected:

    private:
};

#endif // PIZZA_H
