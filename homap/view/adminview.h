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
#include <location.h>
#include <order.h>
#include <pizza.h>
#include <topping.h>
#include <item.h>
/*

    Global Tools

*/
#include <globaltools.h>

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
