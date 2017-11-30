#ifndef ORDERMODEL_H
#define ORDERMODEL_H

#include "mainview.h"
#include "order.h"
#include "pizza.h"

class OrderModel : private MainView
{
    public:
        OrderModel();
        virtual ~OrderModel();
        void newOrder(vector<Pizza> order);
        void newPizza();

    protected:

    private:
        vector<Order> orders;
};

#endif // ORDERMODEL_H
