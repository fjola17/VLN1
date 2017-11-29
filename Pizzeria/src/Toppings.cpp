#include "Toppings.h"

Toppings::Toppings()
{
    this->prize = 0;
    this->name = "";
}

Toppings::~Toppings()
{
    //dtor
}


istream& operator >> (istream& in, Toppings& topping){
    in >> topping.name;
    in >> topping.prize;
    return in;
}

ostream& operator << (ostream& out, Toppings& topping){
    out << topping.name;
    out << topping.prize;
    return out;
}
