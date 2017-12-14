#include "item.h"

Item::Item()
{
    //ctor
}

Item::Item(char nm[50], int pr)
{
    for(int i = 0; i < 50; i++){
        this->name[i] = nm[i];
    }
    this->price = pr;
}

Item::~Item()
{
    //dtor
}

//Writes in items
istream& operator >> (istream& in, Item& ite)
{
    cout << "Input Item name (20):\t" << endl;
    in.getline(ite.name, 50);
    cout << "Input Item price:\t" << endl;
    in >> ite.price;
    return in;
}
