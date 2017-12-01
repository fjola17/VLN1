#ifndef SALESMANMENUCOTROLLER_H
#define SALESMANMENUCOTROLLER_H
#include <iostream>
#include "SalesmanMenuView.h"

using namespace std;
using namespace SalesmanMenuView

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
