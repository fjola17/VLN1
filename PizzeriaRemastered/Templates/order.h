#ifndef ORDER_H
#define ORDER_H

#include <ctime>
#include <vector>

#include "pizza.h"

class Order
{
    public:
        Order(time_t val1, vector<Pizza> val2);
        virtual ~Order();

    protected:

    private:
        char state;
        int id;
        int price;
        time_t date_of;
        time_t date_by;
        vector<Pizza> order;
};

#endif // ORDER_H
