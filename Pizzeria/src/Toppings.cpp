#include "Toppings.h"

Toppings::Toppings()
{
    this->prize = 0;
    this->name[0] ='\0';
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
    for (int i = 0; i< 20; i++){ //print out the character array
        out << topping.name[i];
        if (name[i] =='\0'){
            break;
        }
    }
    out << topping.prize;
    return out;
}
