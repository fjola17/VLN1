#include "SuperHero.h"

SuperHero::SuperHero()
{
    this->name = "";
    this->age = 0;
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
string SuperHero::set_name(string nam){
    this->name = nam;
    return name;
}
int SuperHero::set_age(int ag){
    age = ag;
    return age;
}
char SuperHero::set_super_power(char powah){
    power = powah;
    return power;
}
istream& operator >> (istream& in, SuperHero& hero){
    in >> hero.name >> hero.age >> hero.power;
    return in;
}

ostream& operator << (ostream& out, SuperHero& hero){
    out << hero.name << " ";
    out << "("<< hero.age << ") ";
    if (hero.power == 'f'){
        out << "flying";
    }

    else if (hero.power == 'g'){
        out << "giant";
    }

    else if(hero.power == 'h'){
        out << "Hacker";
    }

    else if(hero.power == 'n'){
        out << "None";
    }
    else{
    out << "Weakling";
    }

    return out;
}
