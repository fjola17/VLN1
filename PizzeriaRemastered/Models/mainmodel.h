#ifndef MAINMODEL_H
#define MAINMODEL_H

#include <string>
#include "mainview.h"

using namespace std;

class MainModel : private MainView
{
    public:
        MainModel();
        virtual ~MainModel();

    void processMainMenu();

    void processError(string e);

    void processAttention(string e);

    void processWarning(string e);

    protected:

    private:
        vector<string> mainMenuText = {"Exit", "Register Pizza", "Order pizza", "Baking the pizza", "Pizza check out"};
};

#endif // MAINMODEL_H
