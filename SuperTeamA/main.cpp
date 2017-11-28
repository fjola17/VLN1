#include <iostream>
#include <fstream>
#include "SuperHero.h"

using namespace std;

int main()
{
    SuperHero hero("Bjorgvin", 27, 'h');
    cin >> hero;

    ofstream fout;
    fout.open("heroes.txt", ios::app);
    if(fout.is_open()){
        fout << hero;

        fout.close();
    }
    cout << hero;
    ifstream fin;
    fin.open("heroes.txt");
    if(fin.is_open()){
        fin >> hero;
        fin.close();
        }
    else{
        cout << "File does not exist" << endl;
    }
    return 0;
}
