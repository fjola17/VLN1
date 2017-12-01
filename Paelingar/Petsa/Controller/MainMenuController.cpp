#include "MainMenuController.h"

MainMenuController::MainMenuController()
{
    displayHeader();


    init();
}

MainMenuController::~MainMenuController()
{
    //dtor
}

void MainMenuController::init()
{
    string input;

    do{
        displayMenu();
        cin >> input;

    }while(input[0] != 'a' && input[0] != 'b' &&
           input[0] != 'c' && input[0] != 's' &&
           input[0] != 'q');

    if( input == "a"){
        AdminMenuController amc;
    }
    else if( input == "b"){
        BakerMenuController amc;
    }
    else if( input == "c"){
        CostumerMenuController amc;
    }
    else if( input == "s"){
        SalesmanMenuController amc;
    }
    else if( input == "q"){
        exitApplication();
    }
}
