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
