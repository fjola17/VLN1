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
}
