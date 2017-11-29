#ifndef MAINMODEL_H
#define MAINMODEL_H

#include <string>
#include <mainview.h>

using namespace std;

class MainModel : private MainView
{
    public:
        MainModel();
        virtual ~MainModel();

    void processMainMenu();

    void processError(std::string e);

    void processAttention(std::string e);

    void processWarning(std::string e);

    protected:

    private:
        vector<string> mainMenuText = {"Exit", "Register Pizza"};
};

#endif // MAINMODEL_H
