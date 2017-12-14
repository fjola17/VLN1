#ifndef ADMINMENUCONTROLLER_H
#define ADMINMENUCONTROLLER_H

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

    Controller

*/
#include <mainmenucontroller.h>
/*

    Model

*/
#include <locationmodel.h>
#include <ordermodel.h>
#include <pizzamodel.h>
#include <toppingmodel.h>
#include <itemmodel.h>
/*

    Template

*/
#include <location.h>
#include <order.h>
#include <pizza.h>
#include <topping.h>
#include <item.h>
/*

    View

*/
#include <adminview.h>
/*

    Global Tools

*/
#include <globaltools.h>

using namespace std;
using namespace GlobalTools;
using namespace AdminView;

class AdminMenuController : public LocationModel, public PizzaModel, public ToppingModel, public ItemModel
{
    public:
        AdminMenuController();
        virtual ~AdminMenuController();

        void init();
        Pizza userNewPizza();
};

#endif // ADMINMENUCONTROLLER_H
