#include "InvalidMonth.h"

InvalidMonth::InvalidMonth(string message)
{
    this->message = message;
}
string InvalidMonth::send_message(){
    return this->message;
}
