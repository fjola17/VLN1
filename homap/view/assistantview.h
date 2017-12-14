#ifndef ASSISTANTVIEW_H
#define ASSISTANTVIEW_H

/*

    General

*/
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
/*

    Template

*/
#include "../template/order.h"
#include "../template/pizza.h"
#include "../template/item.h"

using namespace std;

namespace AssistantView
{
    void displayAssistantMenu();
    void displayPushOrderMenu(Order ord);
    void displayDeliverOrderMenu(vector<Order> ordVector);
    void displayCurrentOrder(Order ord);
    void displayPizzaMenu(vector<Pizza> pizVector);
    void displayItemMenu(vector<Item> iteVector);
};

#endif // ASSISTANTVIEW_H
