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

istream& operator >> (istream& in, Pizza& pizza){
    in >> pizza.name;
    in >> pizza.price;
    in >> pizza.size;
    return in;
}

ostream& operator << (ostream& out, Pizza& pizza){
    out << pizza.name;
    out << pizza.price;
    out << pizza.size;
    return out;
}
