#ifndef Salary_ui_H
#define Salary_ui_H

#include <string>
#include <iostream>
#include <limits>
#include <stdlib.h>
#include "salary_service.h"
using namespace std;

class Salary_ui : private Salary_service
{
    public:
        Salary_ui();
        virtual ~Salary_ui();

        void displayMenu();
        void getInput();

    protected:

    private:
        int user_input;
};

#endif // Salary_ui_H
