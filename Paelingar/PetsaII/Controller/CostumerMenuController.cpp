#include "CostumerMenuController.h"

CostumerMenuController::CostumerMenuController()
{
   clearScrean();
   displayHeader();
   init();
}

CostumerMenuController::~CostumerMenuController()
{
    //dtor
}

void CostumerMenuController::init()
{
    string input;

    do{
        costumerMenu();
        cin >> input;

    }while(input[0] != 'm' && input[0] != 'c' &&
           input[0] != 'v' && input[0] != 'p' &&
           input[0] != 'q');

    if( input == "m"){
        cout << "tem -- input m" << endl;
        CostumerMenuController amc;
    }
    else if( input == "p"){
        cout << "tem -- input p" << endl;
        CostumerMenuController amc;
    }
    else if( input == "v"){
        cout << "tem -- input v" << endl;
        CostumerMenuController amc;
    }
    else if( input == "c"){
        cout << "tem -- input c" << endl;
        CostumerMenuController amc;
    }
    else if( input == "q"){
        MainMenuController mmc;
    }
}
