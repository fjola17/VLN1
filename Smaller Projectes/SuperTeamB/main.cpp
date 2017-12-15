#include <iostream>
#include <fstream>

#include "Superhero.h"

using namespace std;


int main()
{

    cout << "How many heros do you wish to register? ";

    int num;

    cin >> num;

    Superhero hero1[num];

    ofstream fout;

    fout.open("Binary_file_superhero.dat", ios::binary|ios::app);

    for (int i = 0; i < num; i++){
        cin >> hero1[i];

        fout.write((char*)(&hero1[i]), sizeof(Superhero));

    }

    fout.close();

    cout << "All registered heros: " << endl;

    ifstream fin;

    fin.open("Binary_file_superhero.dat", ios::binary);

    fin.seekg(0, fin.end);
    int records = fin.tellg() / sizeof(Superhero);
    fin.seekg(0, fin.beg);

    Superhero *hero = new Superhero[records];
    fin.read((char*)hero, sizeof(Superhero) * records);

    fin.close();


    for(int i = 0; i < records; i++){
        cout << hero[i] << endl;
    }


  //  fin.close();

    return 0;
}
