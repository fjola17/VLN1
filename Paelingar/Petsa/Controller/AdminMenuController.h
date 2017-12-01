#ifndef ADMINMENUCONTROLLER _H
#define ADMINMENUCONTROLLER _H
#include <iostream>
#include "GlobalTools.h"
#include "GlobalView.h"

using namespace std;
using namespace GlobalTools;
using namespace GlobalView;

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
