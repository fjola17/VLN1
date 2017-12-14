#include "location.h"

Location::Location()
{
    //ctor
}

Location::Location(char add[50])
{
    for(int i = 0; i < 20; i++){
        this->address[i] = add[i];
    }
}

Location::~Location()
{
    //dtor
}

ostream& operator << (ostream& out, Location& loc){
    out << "Pizzeria Address:\t" << loc.address << endl;
    return out;
}

istream& operator >> (istream& in, Location& loc)
{
    cout << "Input the a Pizzeria Address (50):\t" << endl;
    in.getline(loc.address, 50);
    return in;
}
