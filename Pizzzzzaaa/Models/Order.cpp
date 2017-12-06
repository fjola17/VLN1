#include "Order.h"

Order::Order(vector<Pizza> val)
{
    this->state = false;
    this->id;
    this->date_of = time(0);
    // 900 seconds is 15 minutes
    this->date_by = time(0) + 900;
    // calculate the total price, from the entire pizza vector
    for(int i = 0; i < val.size();i++){
        this->price += val[i].price;
    }
    // swap the to order.vector
    this->order.swap(val2);
}

Order::~Order()
{
    //dtor
}
