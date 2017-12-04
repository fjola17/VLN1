#ifndef PIZZA_H
#define PIZZA_H

#include "Toppings.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(string name, int price, char size);
        virtual ~Pizza();

        //overwriting cin og cout fyrir petsu til að skrifa inn í skrá og birta pizzur
        friend ifstream& operator >> (ifstream& in, Pizza& pizza);
        friend ofstream& operator << (ofstream& out, Pizza& pizza);

        string name;
        int price;
        char size;

    protected:

    private:


};

#endif // PIZZA_H
