#include "InvalidSSN.h"

InvalidSSN::InvalidSSN(string message)
{
    this->message = message;
}

InvalidSSN::~InvalidSSN()
{
    //dtor
}
string InvalidSSN::sendMessage(){
    return this->message;
}
