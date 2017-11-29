#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <string>
#include <vector>

class MainView
{
    public:
        MainView();
        virtual ~MainView();

        void printMainMenu(std::vector<std::string> m);

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
