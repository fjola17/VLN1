#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "pizzamodel.h"
#include "ordermodel.h"
#include "mainmodel.h"

/*

    Here we inherit all the models and their functions,
    they are private in this context;

*/


class MainController : private PizzaModel, private OrderModel, private MainModel
{
    public:
        MainController();
        virtual ~MainController();

        bool getExit();

        void checkState();

        void requestMainMenu();

        void requestRegisterPizza();

        void requestError(std::string e);

        void requestAttention(std::string e);

        void requestWarning(std::string e);

        void setState_input();

    protected:

    private:
        bool exit;
        int state;
};

#endif // MAINCONTROLLER_H
