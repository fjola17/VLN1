#include "ordermodel.h"

using namespace std;

OrderModel::OrderModel()
{
    //ctor
}

OrderModel::~OrderModel()
{
    //dtor
}


void OrderModel::newOrder(vector<Pizza> order){
    this->orders.push_back(new Order(order));
    MainView::printGenericMessage("Order has been placed");
}
