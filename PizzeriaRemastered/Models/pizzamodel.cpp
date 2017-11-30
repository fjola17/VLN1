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

Pizza PizzaModel::processRegisterPizza(int in){
    return PizzaModel::types[(in - 1)];
}

void PizzaModel::processPizzaMenu(){
    PizzaModel::printPizzaOrder(PizzaModel::types);
}
