#include <iostream>
#include <fstream>
#include "SuperHero.h"

using namespace std;


int main()
{
    SuperHero hero;
    cout << "Please enter hero name, age and power: ";
    cin >> hero;
    cout << hero;
    //not copying things to file
    return 0;
}
