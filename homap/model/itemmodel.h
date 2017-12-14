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
#include "../template/item.h"
/*

    View

*/
#include "../view/adminview.h"
/*

    Global Tools

*/
#include "../global/globaltools.h"

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
        void cleanItem();
};

#endif // ITEMMODEL_H
