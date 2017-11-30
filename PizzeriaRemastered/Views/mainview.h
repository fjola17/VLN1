#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <string>
#include <vector>
#include "pizza.h"
#include "topping.h"

class MainView
{
    public:
        MainView();
        virtual ~MainView();

        void printMainMenu(std::vector<std::string> m);

        void printPizzaMenu(std::vector<Pizza> p);

        void printToppingsChoice(std::vector<Topping> t);

        void printPressAnyKey();

        void printGenericMessage(std::string m);

        void throwError(std::string e);

        void throwWarning(std::string e);

        void throwAttention(std::string e);

        void consoleClear();

    protected:

    private:
};

#endif // MAINVIEW_H
