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
        // displayPizzas(location); //útfæri síðar
    }
    else if (input == "m"){
        location = getLocation();
        cout << endl << "Select which order you want to process?" << endl;
        selectPizza(); //fer inn í annað fall og velur hvaða pizza um ræðir og merkja hvort hún sé tilbúin eða í vinnslu
    }
    else if (input == "q"){

    }
}
