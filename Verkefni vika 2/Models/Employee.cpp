#include "Employee.h"

Employee::Employee()
{
    this->name = "";
    this->social_number = 0;
    this->salary = 0;
}

Employee::Employee(string name, int social_number, double salary){
    this->name = name;
    this->social_number = social_number;
    this->salary = salary;
}

ostream& operator << (ostream& out, Employee emploee){
    out << emploee.name << " " << emploee.social_number << " " << emploee.salary << endl;
    return out;
}



Employee::~Employee()
{
    //dtor
}
