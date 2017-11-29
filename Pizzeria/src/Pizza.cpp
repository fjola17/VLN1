#include "Pizza.h"

Pizza::Pizza()
{
    this->size = 0;
    this->prize = 0;
    this->name = "";
}


int getsize(){
    return size;
}
double getprize(){
    return prize;
}

Pizza::~Pizza()
{
    //dtor
}
