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

//veit ekki hvort �etta eigi a� vera h�r e�a einhversta�ar annarsta�ar
void OrderModel::newPizza(){
    cout << "Place an order: ";
    OrderModel::newOrder(vector<Pizza> order);
    //k��i h�r einhversta�ar annarsta�ar �ar sem �etta er skrifa� inn � skr�
}
