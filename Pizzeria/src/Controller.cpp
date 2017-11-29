#include "Controller.h"

Controller::Controller()
{

}

Controller::Controller(int val)
{
    this->exit = false;
    this->mainMenuText = {"Exit the program","Register New Pizza", "Order Pizza", "Display All Pizza"};
    this->int_in = val;
    this->checkState();
}

Controller::~Controller()
{

}


bool Controller::getExit(){
    return this->exit;
}

void Controller::checkState(){
            //Tracks users location, similiar to a web page URL
            //main.cpp pre-sets this value to 99
    switch(this->int_in){
        case 0:
            this->exit = true;
            break;
        case 1:
            mdl.registerNewPizza();
            cin >> this->int_in;
            break;
        case 2:
            mdl.orderPizza();
            cin >> this->int_in;
            break;
        case 3:
            mdl.displayAllPizza();

            mdl.throwAttention_FromController("Press any key to continue...");
                        //Pauses console, awaiting next input
            system("pause");
                        //Clears command console
            system("cls");
                        //Re-prints the menu
            mdl.parseToView_MenuText(this->mainMenuText);
            cin >> this->int_in;
            break;
        case 99:
                        // default code for menu print
            mdl.parseToView_MenuText(this->mainMenuText);
            cin >> this->int_in;
            break;
        default:
            mdl.throwError_FromController("Your input does't match with the options");
            cin >> this->int_in;
            break;
    }
}
