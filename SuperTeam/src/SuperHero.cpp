#include "SuperHero.h"

SuperHero::SuperHero()
{
    this->name = "";
    this->age = 0;
    this->power = 'n';
}

SuperHero::~SuperHero()
{
    //dtor
}
SuperHero::SuperHero(string name, int age, char power){
    this->name = name;
    this->age = age;
    this->power = power;
}
istream& operator >> (istream& in, SuperHero& hero){

    in >> hero.name;

    in >> hero.age;

    in >> hero.power;
    return in;
}

ostream& operator << (ostream& out, SuperHero& hero){
    out << hero.name << " ";
    out << "("<< hero.age << ") ";

    if (hero.power == 'f'){
        out << "flying" << endl;
    }

    else if (hero.power == 'g'){
        out << "giant" << endl;
    }

    else if(hero.power == 'h'){
        out << "Hacker" << endl;
    }

    else if(hero.power == 'n'){
        out << "None" << endl;
    }
    else{
        out << "Weakling" << endl;
    }

    return out;
}
