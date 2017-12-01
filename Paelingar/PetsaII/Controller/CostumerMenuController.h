#ifndef COSTUMERMENUCONTROLLER_H
#define COSTUMERMENUCONTROLLER_H

#include "GlobalTools.h"
#include "GlobalView.h"
#include "CostumerMenuView.h"
#include "MainMenuController.h"

using namespace std;
using namespace GlobalTools;
using namespace GlobalView;
using namespace CostumerMenuView;

class CostumerMenuController
{
    public:
        CostumerMenuController();
        virtual ~CostumerMenuController();

    protected:

    private:
        void init();
};

#endif // COSTUMERMENUCONTROLLER_H
