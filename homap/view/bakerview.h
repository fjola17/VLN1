#ifndef BAKERVIEW_H
#define BAKERVIEW_H

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

    Template

*/
#include "../template/order.h"

using namespace std;

namespace BakerView
{
    void displayBakerMenu();
    void displayOrders(vector<Order> ordVector);

};

#endif // BAKERVIEW_H
