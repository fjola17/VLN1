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
