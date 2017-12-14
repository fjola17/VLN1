#include "mainmenuview.h"

void MainMenuView::displayMainMenu(){
    int counter = 0;

    cout << ++counter << ".\tTo access the Administrator Menu" << endl;
    cout << ++counter << ".\tTo access the Baker View" << endl;
    cout << ++counter << ".\tTo access the Assistant View" << endl;
    cout << ++counter << ".\tTo exit the program" << endl;
    cout << "******" << endl;
}
