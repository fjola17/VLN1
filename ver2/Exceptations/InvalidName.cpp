#include "InvalidName.h"

InvalidName::InvalidName(string message)
{
    this->message = message;
}

string InvalidName::getmessage()
{
    return this->message;
}
