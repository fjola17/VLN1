#include "mainmenucontroller.h"

MainMenuController::MainMenuController()
{
    MainMenuController::init();
}

MainMenuController::~MainMenuController()
{
    //dtor
}

void MainMenuController::init(){
    // Pre
    int user_input;

    clearConsole();
    displayHeader();
    displayMainMenu();
    // Main
    cin >> user_input;

    clearCin();

    if(user_input == 1){
        AdminMenuController AMC;
    }else if(user_input == 2){
        BakerMenuController BMC;
    }else if(user_input == 3){
        AssistantMenuController ASMC;
    }else if(user_input == 4){
        exitApplication();
    }else{
        optionWarning();
        init();
    }
}
