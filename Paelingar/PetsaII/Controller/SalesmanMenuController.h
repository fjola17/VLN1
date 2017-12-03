#ifndef SALESMANMENUCOTROLLER_H
#define SALESMANMENUCOTROLLER_H

#include "SalesmanMenuView.h"
#include <iostream>
#include <string>
#include "GlobalTools.h"
#include "GlobalView.h"
#include "BakerMenuView.h"
#include "MainMenuController.h"

using namespace std;
using namespace GlobalTools;
using namespace GlobalView;
using namespace SalesmanMenuView;

class SalesmanMenuController
{
    public:
        SalesmanMenuController();
        virtual ~SalesmanMenuController();
        string getlocation();

    protected:

    private:
        void init();
};

#endif // SALESMANMENUCOTROLLER_H
