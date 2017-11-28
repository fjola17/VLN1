#include <iostream>
#include <fstream>
#include "SuperHero.h"

using namespace std;


int main()
{
    SuperHero hero;
  /*  string name;
    int age;
    char power, input;
   */ cout << "Please enter hero name, age and power: ";
    cin >> hero;
/*
    ofstream fout;
    fout.open("heroes.txt", ios::app);
    if(fout.is_open()){
        fout << hero;
        fout.close();
    }

    ifstream fin;
    fin.open("heroes.txt");
    if(fin.is_open()){
        fin >> hero;
        }
    else{
        cout << "File does not exist" << endl;
    }
string str;
char input;
    do{
        getline(fin, str);
        cout << str;
        cout << "another hero?" << endl;
        cin >> input;
    }while (input == 'y');
    fin.close();
*/
    cout << hero;
    return 0;
}
