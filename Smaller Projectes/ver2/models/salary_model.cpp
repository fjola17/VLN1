#include "SALARY_MODEL.h"

Salary_model::Salary_model()
{

}

Salary_model::Salary_model(string nm, string ssn, double sal, int mon, int yr)
{
    this->name = nm;
    this->ssn = ssn;
    this->salary = sal;
    this->month = mon;
    this->year = yr;
}

Salary_model::~Salary_model()
{
    //dtor
}

ostream& operator << (ostream& out, Salary_model& sm){
    out << "Name\t" << sm.name << "\tSSN\t" << sm.ssn << "\nMonth\t" << sm.month << "\tYear\t" << sm.year << "\nSalary\t" << sm.salary << endl;
    return out;
}
