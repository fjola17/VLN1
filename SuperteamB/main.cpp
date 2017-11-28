#include <iostream>
#include <fstream>

using namespace std;


class Superhero{

private:
    char name[38];
    int age;
    char power;
    bool verbose;

public:

    Superhero(){
        name[0] = '\0';
        age = 0;
        power = 'n';
        verbose = true;
    }

    friend ostream& operator << (ostream& out, Superhero& hero){

        if(hero.verbose){
        out << "Name:  ";
        }
        out << hero.name << endl;
        if(hero.verbose){
        out << "Age:   ";
        }
        out << hero.age << endl;
        if(hero.verbose){
        out << "Power: ";
        }
        if(hero.power == 'f'){
            out << "Flying" << endl;
        }
        else if(hero.power == 'g'){
            out << "Giant" << endl;
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
    friend istream& operator >> (istream& in, Superhero& hero){

        if(hero.verbose){
            cout << "Enter Hero's name: ";
        }
        in >> hero.name;
        if(hero.verbose){
            cout << "Enter Hero's Age: ";
        }
        in >> hero.age;
        if(hero.verbose){
            cout << "Enter Hero's Power: ";
        }
        in >> hero.power;


        return in;
    }
    void setVerbose(bool v){
        verbose = v;
    }


};

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

//********************************//
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


    fin.close();

    return 0;
}
