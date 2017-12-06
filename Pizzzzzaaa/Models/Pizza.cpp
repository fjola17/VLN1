#include "Pizza.h"

Pizza::Pizza(string name, int price, vector<Topping> toppings)
{
    this->name = name;
    this->price = price;
    this->toppings.swap(toppings);
}


Pizza::~Pizza()
{
    //dtor
}
