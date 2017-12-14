#include "order.h"

Order::Order()
{

}

Order::~Order()
{
    //dtor
}
istream& operator >> (istream& in, Order order){
    return in;
}
