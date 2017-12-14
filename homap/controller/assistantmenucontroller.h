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
#include <item.h>
/*

    View

*/
#include <assistantview.h>
/*

    Global Tools

*/
#include <globaltools.h>

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
