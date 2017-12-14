#ifndef ITEM_H
#define ITEM_H

/*

    General

*/
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

class Item
{
    public:
        Item();
        Item(char nm[50], int pr);
        virtual ~Item();

        friend istream& operator >> (istream& in, Item& ite);

        char name[50];
        int price;
};
#endif // ITEM_H
