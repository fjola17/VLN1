#include "EmployeeRepo.h"

EmployeeRepo::EmployeeRepo()
{
    //ctor
}

EmployeeRepo::~EmployeeRepo()
{
    //dtor
}
void EmployeeRepo::addNewEmployee(){
    ofstream fout;
    fout.open("Employees.txt", ios::app);
    if(fout.is_open()){
        Employee employee;
        fout << employee;
        fout.close();
    }
    else{
        cout << "File is not open!" << endl;
    }
}
