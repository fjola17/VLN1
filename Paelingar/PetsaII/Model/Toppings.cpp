#include "Toppings.h"

Toppings::Toppings()
{
    name = "";
    price = 0
}

Toppings::~Toppings()
{
    //dtor
}
Toppings::Toppings(string name, int price){
    this->name = name;
    this->price = price;
}
istream& operator >> (istream& in, Toppings& topping){
    in >> topping.name;
    in >> topping.price;
    return in;
}
ostream& operator << (ostream& out, Toppings& topping){
    out << topping.name;
    out << topping.price;
    return out;
}
