#include <iostream>
#include <fstream>
#include "SuperHero.h"

using namespace std;

void getinput(SuperHero hero){
    ifstream fin;
    fin.open("heroes.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            fin >> hero;
            cout << hero << endl;
        }
        cout << endl << endl;
        cout << fin.eof() << endl;
        fin.close();
    }
    else{
        cout << "File does not exist" << endl;
    }
}
void getoutput(SuperHero hero){
    ofstream fout;
    fout.open("heroes.txt", ios::app);
    if(fout.is_open()){
        fout << hero;
        fout.close();
    }
}
int main()
{
    SuperHero hero;
    getinput(hero);
    getoutput(hero);




    return 0;
}
