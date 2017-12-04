#include "AdminMenuController.h"

AdminMenuController ::AdminMenuController ()
{
    clearScrean();
    displayHeader();
    init();
}

AdminMenuController ::~AdminMenuController ()
{
    //dtor
}

void AdminMenuController::init(){

    string input;
    dispAdminMenu();

    do{

        cin >> input;

    }while(input[0] != 'd' && input[0] != 'p' &&
           input[0] != 't' && input[0] != 'd' &&
           input[0] != 'q');

    if( input == "d"){
        cout << "Displaying your favorite pizza" << endl;
        //Pizza myFave("Hawaiian", 1700);
    }
    else if( input == "p"){
        PizzaRegisterController prc;

    }
    else if( input == "s"){
        DisplayAllPizzas();
    }
    else if( input == "t"){
        cout << "New topping" << endl;
        cout << "I do nothing replace me!" << endl;
    }
    else if( input == "s"){
        cout << "~~Displaying pizzas~~ " << endl;
        cout << "I do nothing, replace me!" << endl;
    }
    else if( input == "q"){
        MainMenuController();
    }
}
