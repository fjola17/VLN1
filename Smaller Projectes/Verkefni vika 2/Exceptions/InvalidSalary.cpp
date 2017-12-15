#include "InvalidSalary.h"

InvalidSalary::InvalidSalary(string message)
{
    this->message = message;
}
string InvalidSalary::getmessage(){
    return this->message;
}
