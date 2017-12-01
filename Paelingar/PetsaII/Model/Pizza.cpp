#include "Pizza.h"

Pizza::Pizza()
{
    name = "";
    price = 0;
    size = 'n';

}

Pizza::Pizza(string name, int price, char size)
{
    this->name = name;
    this->price = price;
    this->size = size;
}

Pizza::~Pizza()
{
    //dtor
}
