#ifndef MAINMENUCONTROLLER_H
#define MAINMENUCONTROLLER_H

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
#include "adminmenucontroller.h"
#include "assistantmenucontroller.h"
#include "bakermenucontroller.h"
/*

    Model

*/
#include "../model/locationmodel.h"
#include "../model/ordermodel.h"
#include "../model/pizzamodel.h"
#include "../model/toppingmodel.h"
/*

    Template

*/
#include "../template/location.h"
#include "../template/order.h"
#include "../template/pizza.h"
#include "../template/topping.h"
/*

    View

*/
#include "../view/adminview.h"
#include "../view/assistantview.h"
#include "../view/bakerview.h"
#include "../view/mainmenuview.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;
using namespace MainMenuView;

class MainMenuController
{
    public:
        MainMenuController();
        virtual ~MainMenuController();
        void init();
};

#endif // MAINMENUCONTROLLER_H
