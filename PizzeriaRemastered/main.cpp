#include <iostream>
#include <maincontroller.h>

using namespace std;

int main()
{
    MainController program;

    while(!program.getExit()){
        program.checkState();
    }
    return 0;
}
