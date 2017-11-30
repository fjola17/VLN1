#include "pizza.h"

using namespace std;

Pizza::Pizza(string n, int p, vector<Topping> t)
{
    this->name = n;
    this->price = p;
    this->toppings.swap()
}

Pizza::~Pizza()
{
    //dtor
}
