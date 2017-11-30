#ifndef ORDER_H
#define ORDER_H

#include <ctime>

class Order
{
    public:
        Order();
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
