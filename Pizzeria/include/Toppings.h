#ifndef TOPPINGS_H
#define TOPPINGS_H

#include <string>
#include <iostream>
using namespace std;

class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        friend istream& operator >> (istream& in, Toppings& topping);
        friend ostream& operator << (ostream& out, Toppings& topping);


    protected:

    private:
        string name;
        double prize;

};

#endif // TOPPINGS_H
