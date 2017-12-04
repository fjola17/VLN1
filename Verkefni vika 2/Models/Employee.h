#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee
{
    public:
        Employee();
        Employee(string name, int social_number, double salary);
        friend ostream& operator << (ostream& out, Employee& emploee);
        friend istream& operator >> (istream& in, Employee& employee);
        virtual ~Employee();

    protected:

    private:
        string name;
        int social_number;
        double salary;
};

#endif // EMPLOYEE_H
