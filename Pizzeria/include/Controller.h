#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include "Model.h"
#include <stdlib.h>
#include <vector>

class Controller : private Model
{
    public:

        Controller();

        virtual ~Controller();

        Controller(int val);

<<<<<<< HEAD
=======
        void checkState(){

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
                    mdl.throwError_FromController("Your input doesn't match with the options");
                    cin >> this->int_in;
                    break;
            }
        }

>>>>>>> b6e4f0dcfec7a8441a136c5dfc001bf159f272e6
        bool getExit();

        void checkState();

    private:
        //Living, breathing child of Controller
        Model mdl;
        //I control when the program should die a horrible death
        bool exit;
        //I'm the users input
        int int_in;
        //Static storage for Main Menu
        //Be very careful changing this!
        //Order in the Switch and this Vector Matter!
        vector<string> mainMenuText;
};

#endif // CONTROLLER_H
