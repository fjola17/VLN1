#include "maincontroller.h"
#include <iostream>

using namespace std;

/*

    State keeps track of user location in the menus, the default main menu is: 99 ;
    Preset exit state for the entire program;

    checkState function is what tells Models what data is required;

*/
MainController::MainController()
{
    this->state = 99;
    this->exit = false;
}

MainController::~MainController()
{
    //dtor
}

bool MainController::getExit(){
    return MainController::exit;
}

void MainController::checkState(){
    switch(MainController::state){
    case 0:
        MainController::exit = true;
        break;
    case 1:
        MainController::requestRegisterPizza();
        MainController::requestMainMenu();
        MainController::setState_input();
        break;
    case 99:
        MainController::requestMainMenu();
        MainController::setState_input();
        break;
    default:
        MainController::requestError("This option does not exist");
        break;
    }
}

void MainController::requestMainMenu(){
    MainModel::processMainMenu();
}

void MainController::requestPizzaMenu(){
    PizzaModel::processPizzaMenu();
}

void MainController::requestError(string e){
    MainModel::processError(e);
}

void MainController::requestAttention(string e){
    MainModel::processAttention(e);
}

void MainController::requestWarning(string e){
    MainModel::processWarning(e);
}

void MainController::requestRegisterPizza(){
    int input;
    bool exit = false;
    while(!exit){
        MainController::requestPizzaMenu();
        cin >> input;
        OrderModel::PizzaModel::processRegisterPizza()
    }

    PizzaModel::processRegisterPizza();
}

void MainController::setState_input(){
    cin >> MainController::state;
}
