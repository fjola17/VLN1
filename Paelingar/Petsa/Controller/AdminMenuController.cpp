#include "AdminMenuController.h"

AdminMenuController ::AdminMenuController ()
{
    displayHeader();
    displayAdminMenu();
    init();
}

AdminMenuController ::~AdminMenuController ()
{
    //dtor
}
void AdminMenuController::displayAdminMenu(){
    cout << "What do you want to do?" << endl;
    cout << "d: Display your favorite pizza" << endl;
    cout << "p: Create a new pizza" << endl;
    cout << "t: Create a topping for your pizza" << endl;
    cout << "d: Display all available pizzas" << endl;
    cout << "q: Exit application" << endl;
}

void AdminMenuController::init(){
     string input;

    do{
        displayAdminMenu();
        cin >> input;

    }while(input[0] != 'd' && input[0] != 'p' &&
           input[0] != 't' && input[0] != 'd' &&
           input[0] != 'q');

    if( input == "d"){
        cout << "Displaying your favorite pizza" << endl;
      //  Pizza myFave("Hawaiian", 1700);
    }
    else if( input == "p"){
        cout << "Make a new pizza" << endl;
        cout << "I do nothing replace me" << endl;
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
        exitApplication();
    }
}
