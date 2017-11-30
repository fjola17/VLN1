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

//veit ekki hvort þetta eigi að vera hér eða einhverstaðar annarstaðar
void OrderModel::newPizza(){
    cout << "Place an order: ";
    OrderModel::newOrder(vector<Pizza> order);
    //kóði hér einhverstaðar annarstaðar þar sem þetta er skrifað inn í skrá
}
