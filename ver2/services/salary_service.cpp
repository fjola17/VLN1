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
    /*
    try{
        if(salary < 0){
            throw InvalidSalary("Bad input, invalid salary");
        }
        if (month < 0 && month > 12){
            throw InvalidMonth("Invalid month");
        }
        if(year != 2017){
            throw InvalidYear()
        }
    }
    catch (InvalidSalary s){
        cout << s << endl;
    }
    catch (InvalidMonth m){
        cout << m << endl;
    }
    catch (InvalidYear y){
        cout << y << endl;
    }
    */

    //check for bad input
    if(salary > 0 && (month > 0 && month < 13) && year == 2017){
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

    for(unsigned int i = 0;i < vec.size();i++){
        if(vec[i].ssn == ssn){
            cout << "*****\n" << vec[i];
        }

    }
}

void Salary_service::getSalaryForYearSSN(int year, int ssn){
    vector<Salary_model> vec = Salary_repo::readSalary();
    int total = 0;
    for(unsigned int i = 0;i < vec.size();i++){
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

    for(unsigned int i = 0;i < vec.size();i++){
        if(vec[i].year == year && max_salary < vec[i].salary){
            max_salary = vec[i].salary;
            name = vec[i].name;
        }
    }
    cout << "*****\n" << "Name\t" << name << "\tYear\t" << year << "\nMax Salary\t" << max_salary << endl;
}
