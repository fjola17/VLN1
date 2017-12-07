#include "InvalidYear.h"

InvalidYear::InvalidYear(string message)
{
    this->message = message;
}
string InvalidYear::send_message(){
    return this->message;
}
