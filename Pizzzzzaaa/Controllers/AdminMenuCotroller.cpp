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

    cout << "What do you want to do?"
    string inputString;

    do{
        displayMenu();
         cin >> inputString;
    }while (inputString[0] != 'a' &&
            inputString[0] != 'b' &&
            inputString[0] != 'c' &&
            inputString[0] != 's' &&
            inputString[0] != 'q');

    if( inputString == "a"){
        AdminMenuCotroller amc;
    }
    else if( inputString == "b"){
        BakerMenuCotroller amc;
    }
    else if( inputString == "c"){
        CustomerMenuCotroller amc;
    }
    else if( inputString == "s"){
        SalesmanMenuCotroller amc;
    }
    else if( inputString == "q"){
        exitAplication();
    }
}
