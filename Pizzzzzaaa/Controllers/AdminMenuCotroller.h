#ifndef ADMINMENUCOTROLLER_H
#define ADMINMENUCOTROLLER_H

#include <iostream>
#include <string>
#include "MainMenuView.h"
#include "GlobalView.h"
#include "GlobalHelpers.h"
#include "BakerMenuCotroller.h"
#include "CustomerMenuCotroller.h"
#include "SalesmanMenuCotroller.h"
#include "AdminMenuView.h"
#include "MainMenuController.h"
#include "Pizza.h"

using namespace std;
using namespace GlobalHelpers;
using namespace GlobalView;
using namespace AdminMenuView;


class AdminMenuCotroller
{
    public:
        AdminMenuCotroller();
        virtual ~AdminMenuCotroller();

    protected:

    private:
        void init();
};

#endif // ADMINMENUCOTROLLER_H
