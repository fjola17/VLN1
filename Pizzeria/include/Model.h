#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <fstream>
#include <vector>
#include "View.h"
#include "Pizza.h"

class Model : private View
{
    public:
        Model();

        virtual ~Model();

        void parseToView_MenuText(vector<string> dat);

        void registerNewPizza();

        void orderPizza();

        void displayAllPizza();

        void throwError_FromController(string e);

        void throwAttention_FromController(string a);

        void loadPizzaData();

        void writePizzaData();

    protected:

    private:
        View vw;
        Pizza *pizzaMenu;
};

#endif // MODEL_H
