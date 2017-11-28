#include "Pizza.h"

Pizza::Pizza()
{
    this->size = 0;
    this->prize = 0;
    char[0] = '\0';
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
