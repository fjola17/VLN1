#ifndef GLOBALTOOLS_H
#define GLOBALTOOLS_H

/*

    General

*/
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

namespace GlobalTools
{
    void clearCin();
    void clearConsole();
    void displayHeader();
    void exitApplication();
    void optionWarning();
    void warning(string w);
    void error(string e);
    void attention(string e);
};

#endif // GLOBALTOOLS_H
