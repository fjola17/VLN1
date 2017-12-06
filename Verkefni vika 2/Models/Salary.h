#ifndef SALARY_H
#define SALARY_H

#include "Employee.h"
#include <iostream>
#include <vector>
using namespace std;


class Salary
{
    public:
        Salary();
        virtual ~Salary();
        friend istream& operator >> (istream&in, Salary& money);
        friend ostream& operator >> (ostream&out, Salary& money);
        int getmonth();
        int getyear();
        double getsalary();

    protected:

    private:
        int month;
        int year;
        double salary;
        vector<Employee> employee;
};

#endif // SALARY_H
