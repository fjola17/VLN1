#include "SALARY_REPO.h"

using namespace std;

Salary_repo::Salary_repo()
{
    //ctor
}

Salary_repo::~Salary_repo()
{
    //dtor
}

void Salary_repo::writeSalary(string nm, string ssn, double sal, int mon, int yr){
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
    string name = "";
    string ssn;
    double salary;
    int month;
    int year;
    string test = "a";

    vector<Salary_model> to_return;

    ifstream fin;
    fin.open("Salary.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            name = "";
            fin.clear();
            do{
                fin >> test;
                if(atoi(test.c_str()) == 0){
                    name += test + " ";
                }
            }while(atoi(test.c_str()) == 0);
            ssn = test;
            fin >> salary;
            fin >> month;
            fin >> year;

            to_return.push_back(Salary_model(name, ssn, salary, month, year));
        }
        fin.close();


    }
    else{
        cout << "File is not open" << endl;
    }
    return to_return;
}
