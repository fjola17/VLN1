#include "Pizza.h"

Pizza::Pizza()
{
    this->size = 0;
    this->prize = 0;
    this->name = "";
}
<<<<<<< HEAD
=======
Pizza::Pizza(int value){
    topping* = new topping = [amountOfToppings]; //dynamic array of toppings, might need to change it to vectors
}

int getsize(){
    return size;
}
double getprize(){
    return prize;
}
>>>>>>> b6e4f0dcfec7a8441a136c5dfc001bf159f272e6

Pizza::~Pizza()
{
    delete[] topping;
}
