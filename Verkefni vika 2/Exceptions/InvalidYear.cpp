#include "InvalidYear.h"

InvalidYear::InvalidYear(string str)
{
    this->str = str;
}
string InvalidYear::getmessage(){
    return this->str;
}

InvalidYear::~InvalidYear()
{
    //dtor
}
