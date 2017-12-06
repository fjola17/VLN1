#ifndef SALARYREPO_H
#define SALARYREPO_H
#include <Salary.h>

#include <iostream>
using namespace std;
#include <fstream>


class SalaryRepo
{
    public:
        SalaryRepo();
        virtual ~SalaryRepo();
        void getSalary();
        void displaySalary();
        void lookForSalarySSN();
        void lookForSalaryMonth(int n, string ssn);

    protected:

    private:
};

#endif // SALARYREPO_H
