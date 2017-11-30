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
/*
    idea for a funcion, feel free to include, change or not include this  somewhere
    (unless you do a better version of this function)
    Purpose of this function is to register a new pizza
    most likely this belongs to the order class

void PizzaModel::newPizza(){
    Pizza myPizza;
    cout << "Enter details for your pizza;
    cin >> myPizza;
}
Some function needed to add this into a file
/*
