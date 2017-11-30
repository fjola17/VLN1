#include "order.h"

#include <iostream>
#include <vector>

using namespace std;

Order::Order(time_t val1, vector<Pizza> val2)
{
    this->state = 0;
    this->id;
    this->date_of = time(0);
    // 900 = 15 minutes
    this->date_by = time(0) + 900;
    // calculate the total price, from the entire pizza vector
    for(int i = 0; i < val2.size();i++){
        this->price += val2[i].price;
    }
    // swap the to order.vector
    this->order.swap(val2);
}

Order::~Order()
{
    //dtor
}
