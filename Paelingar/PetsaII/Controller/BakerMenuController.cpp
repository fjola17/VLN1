#include "BakerMenuController.h"

BakerMenuController::BakerMenuController()
{
    clearScrean();
    displayHeader();
    init();
}

BakerMenuController::~BakerMenuController()
{
    //dtor
}
void BakerMenuController::Bakermenu(){
    cout << "Baker menu" << endl;
    cout << "What do you want to do? ";
    cout << "d: Display all pizzas on your location";
    cout << "m: Mark pizza ready or in progress";
    cout << "q: Go back to main menu";
}
string BakerMenuController::getLocation(){
    string location;
    cout << "Please enter your location" << endl;
    cin >> location;
    return location;
}
void BakerMenuController::init(){
    string location, input;
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
        cout << endl << "Mark which pizzas are in progress and ready" << endl;
//        selectPizza(); //fer inn í annað fall og velur hvaða pizza um ræðir og merkja hvort hún sé tilbúin eða í vinnslu
    }
    else if (input == "q"){

    }
}
