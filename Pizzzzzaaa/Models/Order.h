#ifndef ORDER_H
#define ORDER_H

#include <ctime>
#include <vector>

using namespace std;

class Order
{
    public:
        Order(vector<Pizza> val);
        virtual ~Order();

    protected:

    private:
        // whether it's ready or not
        bool state;
        // look into this later
        int id;
        int price;
        time_t date_of;
        time_t date_by;
        vector<Pizza> order;

};

#endif // ORDER_H
