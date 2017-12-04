#include "PizzaRegisterController.h"

PizzaRegisterController::PizzaRegisterController()
{
    clearScrean();
    displayHeader();

    init();
}

PizzaRegisterController::~PizzaRegisterController()
{
    //dtor
}

void PizzaRegisterController::RegisterNewPizza()
{
    PizzaRegisterMenu();
}

void PizzaRegisterController::init()
{
    cout << "temp" << endl;

    string name;
    int price;
    char size;

    cout << "tmp Name:  ";
    cin >> name;
    cout << "tmp Price: ";
    cin >> price;
    cout << "tmp Size:  ";
    cin >> size;

    Pizza pizza(name, price, size);
//    writeNewPizza(pizza);

    cout << "(temp)Pizza registered ";

    AdminMenuController amc;

}
