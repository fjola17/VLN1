#ifndef BAKERMENUCONTROLLER_H
#define BAKERMENUCONTROLLER_H

#include <iostream>
#include <string>
#include "GlobalTools.h"
#include "GlobalView.h"

using namespace std;
using namespace GlobalTools;
using namespace GlobalView;

class BakerMenuController
{
    public:
        BakerMenuController();
        virtual ~BakerMenuController();
        string getLocation();

    protected:

    private:
        void init();
};

#endif // BAKERMENUCONTROLLER_H
