#include <iostream>
#include "Controller.h"
using namespace std;

int main()
{
    //Initialize with Main Menu code #99
    Controller ctrl(99);

    while(!ctrl.getExit()){
        ctrl.checkState();
    }
}
