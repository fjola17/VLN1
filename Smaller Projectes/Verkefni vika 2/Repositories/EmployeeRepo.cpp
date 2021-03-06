#include "EmployeeRepo.h"

EmployeeRepo::EmployeeRepo()
{
    //ctor
}

EmployeeRepo::~EmployeeRepo()
{
    //dtor
}
void EmployeeRepo::addNewEmployee(Employee employee){
    ofstream fin;
    fin.open("Employees.txt");
    if(fin.is_open()){
        fin << employee;
        fin.close();
    }
    else{
        cout << "File is not open!" << endl;
    }
}

void EmployeeRepo::ReadAllEmployees(Employee employee){
    string str;
    ifstream fout;
    fout.open("Employees.txt", ios::app);
    if(fout.is_open()){
        while(!fout.eof()){
            getline(fout, str);
            cout << str << endl;
        }
        fout.close();
    }
}
void searchForSSN(string sn){
    string str;
    Salary salary;
    sn = salary.get_SocialNumber();
    ifstream fout;
    fout.open("Salary.txt", ios::app);
    if(fout.is_open()){
        while(!fout.eof()){
            if(sn == str){ //ef strings are equal
                getline(fout, str);
                cout << str << endl;
            }
        }
        fout.close();
    }
}
