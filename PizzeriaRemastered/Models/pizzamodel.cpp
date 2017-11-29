#include "pizzamodel.h"

using namespace std;

PizzaModel::PizzaModel()
{
    //ctor
}

PizzaModel::~PizzaModel()
{
    //dtor
}

void PizzaModel::processRegisterPizza(){
    MainView::throwWarning("I do nothing, replace me");
    MainView::printPressAnyKey();
    MainView::consoleClear();
}
