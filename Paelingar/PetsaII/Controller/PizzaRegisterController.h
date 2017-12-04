#ifndef PIZZAREGISTERCONTROLLER_H
#define PIZZAREGISTERCONTROLLER_H

#include <fstream>
#include <iostream>
#include <string>

#include "GlobalTools.h"
#include "GlobalView.h"
#include "PizzaRegisterView.h"
#include "MainMenuController.h"
#include "Pizza.h"
#include "PizzaRepo.h"

using namespace std;
using namespace GlobalTools;
using namespace GlobalView;
using namespace PizzaRegisterView;



class PizzaRegisterController
{
    public:
        PizzaRegisterController();
        virtual ~PizzaRegisterController();
        void RegisterNewPizza();
        void init();

    protected:

    private:
};

#endif // PIZZAREGISTERCONTROLLER_H
