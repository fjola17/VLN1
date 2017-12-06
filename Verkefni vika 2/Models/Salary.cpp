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
    cout << "Month: ";
    in >> money.month;
    cout << "Year: ";
    in >> money.year;
    cout << "Salary: ";
    in >> money.salary;
    return in;
}
ostream& operator >> (ostream&out, Salary& money){
    out << "Month: "<< money.month << " ";
    out << "Year: " << money.year << " ";
    out << "Salary: " << money.salary << " " << endl;
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
