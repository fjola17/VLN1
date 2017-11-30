#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <string>
#include <vector>

#include <iostream>
using namespace std;

class MainView
{
    public:
        MainView();
        virtual ~MainView();

        void printMainMenu(vector<string> m);

        void printPressAnyKey();

        void printGenericMessage(string m);

        void throwError(string e);

        void throwWarning(string e);

        void throwAttention(string e);

        void consoleClear();

    protected:

    private:
};

#endif // MAINVIEW_H
