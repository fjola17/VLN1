#include "Salary.h"

Salary::Salary()
{
    this->month = 1;
    this->year = 0;
    this->salary = 0;
}

Salary::~Salary()
{
    //dtor
}
istream& operator >> (istream&in, Salary& money){
    in >> money.month;
    in >> money.year;
    in >> money.salary;
    return in;
}
ostream& operator >> (ostream&out, Salary& money){
    out << money.month;
    out << money.year;
    out << money.salary;
    return out;
}
int Salary::getmonth(){
    return this->month;
}
int Salary::getyear(){
    return this->year;
}
double Salary::getsalary(){
    return this->salary;
}
