#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include "Model.h"
#include <stdlib.h>

class Controller : private Model
{
    public:

        Controller();

        virtual ~Controller();

        Controller(int val);

        void checkState(){

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
                    system("pause");
                    system("cls");
                    mdl.parseToView_MenuText(this->mainMenuText);
                    cin >> this->int_in;
                    break;
                case 99:
                    mdl.parseToView_MenuText(this->mainMenuText);
                    cin >> this->int_in;
                    break;
                default:
                    mdl.throwError_FromController("Your input does't match with the options");
                    cin >> this->int_in;
                    break;
            }
        }

        bool getExit(){
            return this->exit;
        }

    private:
        Model mdl;
        bool exit = false;
        int int_in;

        vector<string> mainMenuText = {"Exit the program","Register New Pizza", "Order Pizza", "Display All Pizza"};
};

#endif // CONTROLLER_H
