#ifndef TOPPINGS_H
#define TOPPINGS_H

#include <iostream>
#include <fstream>
using namespace std;

class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        Toppings(string name, int price);

        friend istream& operator >> (istream& in, Toppings& toppping);
        friend ostream& operator << (ostream& out, Toppings& topping);

    protected:

    private:
        string name;
        int price;
};

#endif // TOPPINGS_H
