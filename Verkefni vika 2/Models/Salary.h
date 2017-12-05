#ifndef SALARY_H
#define SALARY_H

#include <iostream>
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
};

#endif // SALARY_H
