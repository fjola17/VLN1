#include "SALARY_SERVICE.h"

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
    string ssn;
    double salary;
    int month;
    int year;

    cout << "*****\n" << "Input as follows :\nName:\nSSN: (Must be 10 characters in length)\nSalary: (More than 0)\nMonth: (Between 1-12)\nYear: (1900+)\n" << endl;
    getline(cin, name);
    cin >> ssn >> salary >> month >> year;

    //check for bad input
    if(!any_of(name.begin(), name.end(), ::isdigit) && any_of(ssn.begin(), ssn.end(), ::isdigit) && ssn.length() == 10 && salary > 0 && (month > 0 && month < 13) && year <= 1900){
        cout << "*****\n" << "Data saved" << endl;
        Salary_repo::writeSalary(name, ssn, salary, month, year);
        return true;
    }else{
        cout << "*****\n" << "Bad input" << endl;
        return false;
    }
}

void Salary_service::getSalarySSN(string ssn){
    vector<Salary_model> vec = Salary_repo::readSalary();

    for(unsigned int i = 0;i < vec.size();i++){
        if(vec[i].ssn == ssn){
            if(vec[i].name != ""){
                cout << "*****\n" << vec[i];
            }

        }

    }
}

void Salary_service::getSalaryForYearSSN(int year, string ssn){
    vector<Salary_model> vec = Salary_repo::readSalary();
    int total = 0;
    for(unsigned int i = 0;i < vec.size();i++){
        if(vec[i].ssn == ssn && vec[i].year == year && vec[i].name != ""){
            total += vec[i].salary;
        }
    }
    cout << "*****\n" << "SSN\t" << ssn << "\tYear\t" << year << "\nTotal Salary\t" << total << endl;
}

void Salary_service::getMaxSalaryYear(int year){
    vector<Salary_model> vec = Salary_repo::readSalary();
    int max_salary = 0;
    string name = "";

    for(unsigned int i = 0;i < vec.size();i++){
        if(vec[i].year == year && max_salary < vec[i].salary && vec[i].name != ""){
            max_salary = vec[i].salary;
            name = vec[i].name;
        }
    }
    cout << "*****\n" << "Name\t" << name << "\tYear\t" << year << "\nMax Salary\t" << max_salary << endl;
}
