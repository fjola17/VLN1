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
        // displayPizzas(location); //�tf�ri s��ar
    }
    else if (input == "m"){
        location = getLocation();
        cout << endl << "Mark which pizzas are in progress and ready" << endl;
        selectPizza(); //fer inn � anna� fall og velur hva�a pizza um r��ir og merkja hvort h�n s� tilb�in e�a � vinnslu
    }
    else if (input == "q"){

    }
}
