#ifndef TOPPING_H
#define TOPPING_H

#include <string>
#include <iostream>
using namespace std;

class Topping
{
    public:
        Topping(string name, int price);
        virtual ~Topping();

    protected:

    private:
        string name;
        int price;
};

#endif // TOPPING_H
