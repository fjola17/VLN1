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
#include "mainmenucontroller.h"
/*

    Model

*/
#include "../model/locationmodel.h"
#include "../model/ordermodel.h"
#include "../model/pizzamodel.h"
#include "../model/toppingmodel.h"
#include "../model/itemmodel.h"
/*

    Template

*/
#include "../template/location.h"
#include "../template/order.h"
#include "../template/pizza.h"
#include "../template/topping.h"
#include "../template/item.h"
/*

    View

*/
#include "../view/adminview.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;
using namespace AdminView;

class AdminMenuController : public LocationModel, public PizzaModel, public ToppingModel, public ItemModel, public OrderModel
{
    public:
        AdminMenuController();
        virtual ~AdminMenuController();

        void init();
        Pizza userNewPizza();

        void removefrommenu();
        void removefromtoppings();
        void removefromitem();

        void analytics();
};

#endif // ADMINMENUCONTROLLER_H
