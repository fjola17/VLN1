#include "salary_repo.h"

Salary_repo::Salary_repo()
{
    //ctor
}

Salary_repo::~Salary_repo()
{
    //dtor
}

void Salary_repo::writeSalary(string nm, int ssn, double sal, int mon, int yr){
    ofstream fout;
    fout.open("Salary.txt", ios::app);
    if(fout.is_open()){
        fout << nm << " " << ssn << " " << sal << " " << mon << " " << yr << endl;
        fout.close();
    }
    else{
        cout << "File is not open" << endl;
    }
}

vector<Salary_model> Salary_repo::readSalary(){
    string name;
    int ssn;
    double salary;
    int month;
    int year;

    vector<Salary_model> to_return;

    ifstream fin;
    fin.open("Salary.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            fin >> name;
            fin >> ssn;
            fin >> salary;
            fin >> month;
            fin >> year;

            to_return.push_back(Salary_model(name, ssn, salary, month, year));
        }
        string line;
        while(getline(fin, line)){
            cout << line << endl;
        }
        fin.close();


    }
    else{
        cout << "File is not open" << endl;
    }
    return to_return;
}
