#ifndef ADMINMENUCONTROLLER_H
#define ADMINMENUCONTROLLER_H

#include <iostream>
#include "GlobalTools.h"
#include "GlobalView.h"
#include "PizzaRegisterController.h"
#include "AdminMenuView.h"


using namespace std;
using namespace GlobalTools;
using namespace GlobalView;
using namespace AdminMenuView;

class AdminMenuController
{
    public:
        AdminMenuController ();
        virtual ~AdminMenuController ();
        void displayAdminMenu();

    protected:

    private:
        void init();
};

#endif // ADMINMENUCONTROLLER _H
