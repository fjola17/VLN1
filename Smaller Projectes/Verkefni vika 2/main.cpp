#include <iostream>
#include "SalaryUI.h"
using namespace std;

int main()
{
    char input;
    do{
        SalaryUI ui;
        ui.getoptions();
        cout << "Do you want to do anything else? ";
        cin >> input;
    }while(input == 'y' || input =='Y');

    return 0;
}
