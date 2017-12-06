#include "SalaryRepo.h"

SalaryRepo::SalaryRepo()
{
    //ctor
}

SalaryRepo::~SalaryRepo()
{
    //dtor
}
void SalaryRepo::getSalary(){
    Salary salary;

    ofstream fout;
    fout.open("Salary.txt");
    if(fout.is_open()){
        fout << salary.getmonth() << salary.getyear() << salary.getsalary();
        fout.close();
    }
    else{
        cout << "File is not open" << endl;
    }
}
void SalaryRepo::displaySalary(){
    Salary salary;
    string str;
    ifstream fin;
    fin.open("Salary.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str;
        }
        fin.close();
    }

}
void SalaryRepo::lookForSalarySSN(){
  //  es.LookForEmployeeSSN(employee);

}
void SalaryRepo::lookForSalaryMonth(){

}
