#ifndef SALESMANMENUCOTROLLER_H
#define SALESMANMENUCOTROLLER_H

#include <iostream>
#include <string>
#include "GlobalTools.h"
#include "GlobalView.h"

using namespace std;
using namespace GlobalTools;
using namespace GlobalView;

class SalesmanMenuController
{
    public:
        SalesmanMenuController();
        virtual ~SalesmanMenuController();
        void SalesmanMenu();

    protected:

    private:
        void init();
};

#endif // SALESMANMENUCOTROLLER_H
