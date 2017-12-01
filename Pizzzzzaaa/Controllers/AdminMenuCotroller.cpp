#include "AdminMenuCotroller.h"

AdminMenuCotroller::AdminMenuCotroller()
{
    clearScreen();
    displayHeader();
    init();
}

AdminMenuCotroller::~AdminMenuCotroller()
{
}


void AdminMenuCotroller::init()
{
    //Pizza favPizza = PizzaService.getFavPizza();

    Pizza favPizza("Pepsveporonie", 1337);
    displayFavPizza(favPizza);

    cout << "What do you want to do?" << endl;
    string inputString;

    do{
        displayMenu();
         cin >> inputString;
    }while (inputString[0] != 'm' &&
            inputString[0] != 't' &&
            inputString[0] != 'd' &&
            inputString[0] != 'd' &&
            inputString[0] != 'l');

    if( inputString == "m"){
        //make a new pizza
    }
    else if( inputString == "t"){
        //make new toppings
    }
    else if( inputString == "c"){
        CustomerMenuCotroller amc;
    }
    else if( inputString == "s"){

    }
    else if( inputString == "q"){
        exitAplication();
    }
}
