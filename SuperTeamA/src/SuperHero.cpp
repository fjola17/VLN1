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
    hero.fin.open("heroes.txt", ios::app);

    in >> hero.name >> hero.age >> hero.power;
    hero.fin.close();
    return hero.fin;
}

ostream& operator << (ostream& out, SuperHero& hero){
    string str;
    hero.fout.open("heroes.txt", ios::app);
//    getline(hero.fout, str);

    out << hero.name << endl;
    out << hero.age << endl;

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
    hero.fout.close();
    return out;
}
