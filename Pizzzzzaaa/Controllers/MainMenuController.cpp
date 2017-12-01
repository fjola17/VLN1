#include "MainMenuController.h"

MainMenuController::MainMenuController()
{
    clearScreen();
    displayHeader();
    init();
}

MainMenuController::~MainMenuController()
{
    //dtor
}


void MainMenuController::init()
{
    string inputString;

    do{
        displayMenu();
         cin >> inputString;
    }while (inputString[0] != 'a' &&
            inputString[0] != 'b' &&
            inputString[0] != 'c' &&
            inputString[0] != 's' &&
            inputString[0] != 'q');

    if( inputString == "a"){
        AdminMenuCotroller amc;
    }
    else if( inputString == "b"){
        BakerMenuCotroller amc;
    }
    else if( inputString == "c"){
        CustomerMenuCotroller amc;
    }
    else if( inputString == "s"){
        SalesmanMenuCotroller amc;
    }
    else if( inputString == "q"){
        exitAplication();
    }
}
