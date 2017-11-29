#include <iostream>
#include <fstream>
#include "SuperHero.h"

using namespace std;

int main()
{
    string str;

    SuperHero hero;

    cout << "Enter details for your hero" << endl;
    cin >> hero;
    ofstream fout;
    fout.open("heroes.txt", ios::app);
    if(fout.is_open()){
        fout << hero;
        fout.close();
    }

    ifstream fin;
    fin.open("heroes.txt", ios::app);
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str << endl; //print out every hero like it is in the heroes file

        }
        fin.close();
    }
    else{
        cout << "File is not open" << endl;
    }

    return 0;
}
