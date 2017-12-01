#ifndef MAINMENUCONTROLLER_H
#define MAINMENUCONTROLLER_H

#include "MainMenuView.h"
#include "GlobalView.h"
#include "GlobalTools.h"
#include "AdminMenuController.h"
#include "BakerMenuController.h"
#include "SalesmanMenuController.h"
#include "CostumerMenuController.h"

#include <iostream>
#include <string>

using namespace std;
using namespace MainMenuView;
using namespace GlobalView;
using namespace GlobalTools;

class MainMenuController
{
    public:
        MainMenuController();
        virtual ~MainMenuController();
    protected:

    private:
        void init();
};

#endif // MAINMENUCONTROLLER_H
