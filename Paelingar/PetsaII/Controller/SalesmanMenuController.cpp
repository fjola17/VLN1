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
void SalesmanMenuController::SalesmanMenu(){
    cout << "Salesman menu" << endl << endl;
    cout << "What do you want to do? " << endl;
    cout << "d: Display all pizzas" << endl;
    cout << "c: Checkout a pizza order" << endl;
    cout << "q: Go back to main menu" << endl;
}
string SalesmanMenuController::getlocation(){
    string location;
    cout << "Please enter your location" << endl;
    cin >> location;
    return location;
}
void SalesmanMenuController::init(){
    string location, inputstring;
    SalesmanMenu();
    cin >> inputstring;
    do{
        Bakermenu();
        cin >> input;
    }while(input != "d" && input != "m" && input != "q");
    if (input == "d"){
        location = getLocation();
        cout << "Displaying pizzas from your location" << endl;
        cout << "This doesn't do anything yet" << endl;
        // displayPizzas(location); //�tf�ri s��ar
    }
    else if (input == "m"){
        location = getLocation();
        cout << endl << "Select which order you want to process?" << endl;
        cout << "This doesn't do anything, please change code" << endl;
    }
    else if (input == "q"){
        MainMenuController();
    }
}
