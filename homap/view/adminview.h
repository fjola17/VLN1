#ifndef ADMINVIEW_H
#define ADMINVIEW_H

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
#include "../template/location.h"
#include "../template/order.h"
#include "../template/pizza.h"
#include "../template/topping.h"
#include "../template/item.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;

namespace AdminView
{
    void displayAdminMenu();
    void displayToppings(vector<Topping> topVector);
    void displayItems(vector<Item> iteVector);
    void displayLocations(vector<Location> locVector);
    void displayPizzaMenu(vector<Pizza> pizVector);
};

#endif // ADMINVIEW_H
