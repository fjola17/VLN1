#include "Salary.h"

Salary::Salary()
{
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
    if(money.month <= 12 && money.month >= 1){
        out << money.month;
    }
    else{
        cout << "Invalid input" << endl;
    }
    out << money.year;
    if(money.salary >= 0){
        out << money.salary;
    }
    else{
        cout << "invalid input" << endl;
    }
    return out;
}
