#ifndef ORDER_H
#define ORDER_H

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
#include "location.h"
#include "pizza.h"
#include "item.h"

using namespace std;

class Order
{
    public:
        Order();
        virtual ~Order();

        int price;
        int state;
        char phoneNumber[10];
        char name[50];
        int sizeOfPizzas;
        int sizeOfItems;
        Location address;
        Pizza pizzas[20];
        Item items[20];
};

#endif // ORDER_H
