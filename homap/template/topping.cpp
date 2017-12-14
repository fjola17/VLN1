#include "topping.h"

Topping::Topping()
{
    //ctor
}

Topping::Topping(char nm[20], int pr)
{
    for(int i = 0; i < 20; i++){
        this->name[i] = nm[i];
    }
    this->price = pr;
}

Topping::~Topping()
{
    //dtor
}

istream& operator >> (istream& in, Topping& top)
{
    cout << "Input Topping name (20):\t" << endl;
    in.getline(top.name, 20);
    cout << "Input Topping price:\t" << endl;
    in >> top.price;
    return in;
}
