#include "InvalidSalary.h"

InvalidSalary::InvalidSalary(string message)
{
    this->message = message;
}

string InvalidSalary::send_message(){
    return this->message;
}
