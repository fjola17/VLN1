#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee
{
    public:
        Employee();
        Employee(string name, string social_number);
        friend ostream& operator << (ostream& out, Employee& emploee);
        friend istream& operator >> (istream& in, Employee& employee);
        virtual ~Employee();
        string getname();
        string get_SocialNumber();

    protected:

    private:
        string name;
        string social_number;

};

#endif // EMPLOYEE_H
