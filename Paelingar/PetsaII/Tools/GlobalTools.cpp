#include "GlobalTools.h"


void GlobalTools::clearScrean()
{
    system("CLS");
}

void GlobalTools::exitApplication()
{
    exit(0);
}

void GlobalTools::DisplayAllPizzas()
{

    ifstream fin;

    fin.open("Pizza_Menu_File.dat", ios::binary);

    fin.seekg(0, fin.end);
    int records = fin.tellg() / sizeof(Pizza);
    fin.seekg(0, fin.beg);

    Pizza *pizza = new Pizza[records];
    fin.read((char*)pizza, sizeof(Pizza) * records);

    fin.close();

    for(int i = 0; i < records; i++){
        cout << pizza[i].name << endl;
        cout << pizza[i].price << endl;
        cout << pizza[i].size << endl;
    }


}
