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
        string getname();
        string get_SocialNumber();

    protected:

    private:
        string name;
        char social_number[10];
        int month;
        int year;
        double salary;
};

#endif // SALARY_H
