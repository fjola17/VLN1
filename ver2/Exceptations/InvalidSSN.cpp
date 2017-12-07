#include "InvalidSSN.h"

InvalidSSN::InvalidSSN(string message)
{
    this->message = message;
}

string InvalidSSN::send_message(){
    return this->message;
}
