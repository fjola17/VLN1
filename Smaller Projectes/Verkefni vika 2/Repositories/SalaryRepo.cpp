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
        fout << salary.getname() << salary.get_SocialNumber() << salary.getyear() << salary.getmonth() << salary.getsalary() << endl;
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

void SalaryRepo::lookForSalaryMonth(int n, string ssn){
    string str;
    Salary salary;
    ssn = salary.get_SocialNumber();
    n = salary.getmonth();
    ifstream fout;
    fout.open("Salary.txt", ios::app);
    if(fout.is_open()){
        while(!fout.eof()){
            getline(fout, str);
            if(ssn == str){ //ef lína inniheldur...
                cout << str << endl;
                if(salary.getmonth() == n){
                    //blablabla
                }
            }
        }
        fout.close();
    }
}
