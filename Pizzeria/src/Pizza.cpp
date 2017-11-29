#include "Pizza.h"

Pizza::Pizza()
{
    this->size = 0;
    this->prize = 0;
    this->name = "";
}
Pizza::Pizza(int value){
    topping* = new topping = [amountOfToppings]; //dynamic array of toppings, might need to change it to vectors
}

int getsize(){
    return size;
}
double getprize(){
    return prize;
}

Pizza::~Pizza()
{
    delete[] topping;
}
