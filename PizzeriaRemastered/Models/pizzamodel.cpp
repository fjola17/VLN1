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
    MainView::throwWarning("Registering a pizza. ");
    MainView::printPressAnyKey(); //need to add some code here to be able to register a pizza
    MainView::consoleClear();
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
