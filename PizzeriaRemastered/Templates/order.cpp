#include "order.h"

#include <iostream>
#include <vector>

using namespace std;

Order::Order(vector<Pizza> val)
{
    this->state = 0;
    this->id;
    this->date_of = time(0);
    // 900 = 15 minutes
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
