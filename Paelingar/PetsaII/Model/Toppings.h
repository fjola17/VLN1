#ifndef TOPPINGS_H
#define TOPPINGS_H

#include <iostream>
using namespace std;

class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        Toppings(string name, int price);

        //overwriting cin and cout to be able to write toppings into a file (might be needed later)
        friend istream& operator >> (istream& in, Toppings& toppping);
        friend ostream& operator << (ostream& out, Toppings& topping);

    protected:

    private:
        string name;
        int price;
};

#endif // TOPPINGS_H
