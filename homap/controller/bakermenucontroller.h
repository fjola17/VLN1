#ifndef BAKERMENUCONTROLLER_H
#define BAKERMENUCONTROLLER_H

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
#include "mainmenucontroller.h"
/*

    Model

*/
#include "../model/ordermodel.h"
#include "../model/locationmodel.h"
/*

    Template

*/
#include "../template/location.h"
#include "../template/order.h"
/*

    View

*/
#include "../view/bakerview.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;
using namespace BakerView;

class BakerMenuController : public OrderModel, public LocationModel
{
    public:
        BakerMenuController();
        virtual ~BakerMenuController();

        void init();
        void processOrder();

        Location currentLocation;
};

#endif // BAKERMENUCONTROLLER_H
