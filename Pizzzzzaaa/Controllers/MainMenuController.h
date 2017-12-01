#ifndef MAINMENUCONTROLLER_H
#define MAINMENUCONTROLLER_H

#include <iostream>
#include <string>
#include "MainMenuView.h"
#include "GlobalView.h"
#include "GlobalHelpers.h"
#include "AdminMenuCotroller.h"
#include "BakerMenuCotroller.h"
#include "CustomerMenuCotroller.h"
#include "SalesmanMenuCotroller.h"

using namespace std;
using namespace GlobalHelpers;
using namespace MainMenuView;
using namespace GlobalView;


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
