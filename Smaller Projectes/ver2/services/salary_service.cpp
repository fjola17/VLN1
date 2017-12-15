#include "SALARY_SERVICE.h"


#include <map>
#include <string>

using namespace std;

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

    cout << "*****\n" << "Input as follows" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "SSN: (Must be 10 characters in length) ";
    cin >> ssn;
    cout << "Salary: (More than 0): ";
    cin >> salary;
    cout << "Month: (Between 1-12): ";
    cin >> month;
    cout << "Year: (1900+)";
    cin>> year;

    //check for bad input
    if(!any_of(name.begin(), name.end(), ::isdigit) && any_of(ssn.begin(), ssn.end(), ::isdigit) && ssn.length() == 10 && salary > 0 && (month > 0 && month < 13) && year >= 1900){
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

    map<string, int> names_salary;

    for(unsigned int i = 0;i < vec.size();i++){
        if(vec[i].year == year && vec[i].name != ""){
            names_salary[vec[i].ssn] += vec[i].salary;
        }
    }

    for(auto& x: names_salary){
        if(max_salary < x.second){
            max_salary = x.second;

            for(int i = 0; i < vec.size(); i++){
                if(vec[i].ssn == x.first){
                    name = vec[i].name;
                }
            }
        }
    }

    cout << "*****\n" << "Name\t" << name << "\tYear\t" << year << "\nMax Salary\t" << max_salary << endl;
}
