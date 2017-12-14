#ifndef ITEMMODEL_H
#define ITEMMODEL_H

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
#include <item.h>
/*

    View

*/
#include <adminview.h>
/*

    Global Tools

*/
#include <globaltools.h>

using namespace std;
using namespace GlobalTools;

class ItemModel
{
    public:
        ItemModel();
        virtual ~ItemModel();

        void writeItem(Item ite);
        vector<Item> selectItem();
        vector<Item> readItems();
};

#endif // ITEMMODEL_H
