#ifndef PIZZAMODEL_H
#define PIZZAMODEL_H

#include "mainview.h"

class PizzaModel : private MainView
{
    public:
        PizzaModel();
        virtual ~PizzaModel();

        void processRegisterPizza();

    protected:

    private:
};

#endif // PIZZAMODEL_H
