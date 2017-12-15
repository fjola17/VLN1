#include "InvalidMonth.h"

InvalidMonth::InvalidMonth(string message)
{
    this->message = message;
}

InvalidMonth::~InvalidMonth()
{
    //dtor
}
string InvalidMonth::getmessage(){
    return this->message;
}
