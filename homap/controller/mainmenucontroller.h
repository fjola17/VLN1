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
#include <adminmenucontroller.h>
#include <assistantmenucontroller.h>
#include <bakermenucontroller.h>
/*

    Model

*/
#include <locationmodel.h>
#include <ordermodel.h>
#include <pizzamodel.h>
#include <toppingmodel.h>
/*

    Template

*/
#include <location.h>
#include <order.h>
#include <pizza.h>
#include <topping.h>
/*

    View

*/
#include <adminview.h>
#include <assistantview.h>
#include <bakerview.h>
#include <mainmenuview.h>
/*

    Global Tools

*/
#include <globaltools.h>

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
