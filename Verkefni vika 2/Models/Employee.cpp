#include "Employee.h"

Employee::Employee()
{
    this->name = "";
    this->social_number = "";
}

Employee::Employee(string name, string social_number){
    this->name = name;
    this->social_number = social_number;
}

ostream& operator << (ostream& out, Employee& emploee){
    out << emploee.name << " " << emploee.social_number << endl;
    return out;
}
istream& operator >> (istream& in, Employee& employee){
    cout << "Name: ";
    in >> employee.name;
    cout << "Social number: ";
    in >> employee.social_number;
    return in;
}

string Employee::getname(){ //bara bókstafir
    return this->name;
}
string Employee::get_SocialNumber(){ //á bara að vera tölustafir
    return this->social_number;
}

Employee::~Employee()
{
    //dtor
}
