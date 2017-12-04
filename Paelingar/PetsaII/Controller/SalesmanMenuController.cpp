#include "SalesmanMenuController.h"


SalesmanMenuController::SalesmanMenuController()
{
    clearScrean();
    displayHeader();
    init();
}

SalesmanMenuController::~SalesmanMenuController()
{
    //dtor
}

string SalesmanMenuController::getlocation(){
    string location;
    cout << "Please enter your location" << endl;
    cin >> location;
    return location;
}
void SalesmanMenuController::init(){
    string location, input;
    do{
        SalesmanMenu();
        cin >> input;
    }while(input != "d" && input != "m" && input != "q");
    if (input == "d"){
        location = getlocation();
        cout << "Displaying pizzas from your location" << endl;
        cout << "This doesn't do anything yet" << endl;
        // displayPizzas(location); //útfæri síðar
    }
    else if (input == "m"){
        location = getlocation();
        cout << endl << "Select which order you want to process?" << endl;
        cout << "This doesn't do anything, please change code" << endl;
    }
    else if (input == "q"){
        MainMenuController mmc;
    }
}
