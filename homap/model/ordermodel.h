#ifndef ORDERMODEL_H
#define ORDERMODEL_H

/*

    General

*/
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
/*

    Template

*/
#include "../template/order.h"
#include "../template/location.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

using namespace std;
using namespace GlobalTools;

class OrderModel
{
    public:
        OrderModel();
        virtual ~OrderModel();

        void writeOrder(Order ord);
        void cleanOrder();
        vector<Order> readNonConditionalOrderMenu();
        vector<Order> readOrderMenu(Location loc);
        vector<Order> readOrderMenuBaker(Location loc);
};

#endif // ORDERMODEL_H
