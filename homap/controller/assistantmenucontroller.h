#ifndef ASSISTANTMENUCONTROLLER_H
#define ASSISTANTMENUCONTROLLER_H

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
#include "../template/item.h"
/*

    View

*/
#include "../view/assistantview.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;
using namespace AssistantView;


class AssistantMenuController : public OrderModel, public LocationModel, public PizzaModel, public ToppingModel, public ItemModel
{
    public:
        AssistantMenuController();
        virtual ~AssistantMenuController();

        void init();
        void pushOrder();
        void deliverOrder();

        Location currentLocation;
};

#endif // ASSISTANTMENUCONTROLLER_H
