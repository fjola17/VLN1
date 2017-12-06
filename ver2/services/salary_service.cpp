#include "salary_service.h"

Salary_service::Salary_service()
{
    //ctor
}

Salary_service::~Salary_service()
{
    //dtor
}

bool Salary_service::validateSalary(){
    string name;
    int ssn;
    double salary;
    int month;
    int year;

    cout << "*****\n" << "Input as follows :\nName:\nSSN: (example : 123123)\nSalary: (More than 0)\nMonth: (Between 1-12)\nYear: (1900+)\n" << endl;
    cin >> name >> ssn >> salary >> month >> year;

    //check for bad input
    if(salary > 0 && (month > 0 && month < 13) && year > 1899){
        cout << "*****\n" << "Data saved" << endl;
        Salary_repo::writeSalary(name, ssn, salary, month, year);
        return true;
    }else{
        cout << "*****\n" << "Bad input" << endl;
        return false;
    }
}

void Salary_service::getSalarySSN(int ssn){
    vector<Salary_model> vec = Salary_repo::readSalary();

    for(int i = 0;i < vec.size();i++){
        if(vec[i].ssn == ssn){
            cout << "*****\n" << vec[i];
        }

    }
}

void Salary_service::getSalaryForYearSSN(int year, int ssn){
    vector<Salary_model> vec = Salary_repo::readSalary();
    int total = 0;
    for(int i = 0;i < vec.size();i++){
        if(vec[i].ssn == ssn && vec[i].year == year){
            total += vec[i].salary;
        }
    }
    cout << "*****\n" << "SSN\t" << ssn << "\tYear\t" << year << "\nTotal Salary\t" << total << endl;
}

void Salary_service::getMaxSalaryYear(int year){
    vector<Salary_model> vec = Salary_repo::readSalary();
    int max_salary = 0;
    string name = "";

    for(int i = 0;i < vec.size();i++){
        if(vec[i].year == year && max_salary < vec[i].salary){
            max_salary = vec[i].salary;
            name = vec[i].name;
        }
    }
    cout << "*****\n" << "Name\t" << name << "\tYear\t" << year << "\nMax Salary\t" << max_salary << endl;
}
