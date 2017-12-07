#ifndef SALARY_SERVICE_H
#define SALARY_SERVICE_H

#include <iostream>
#include <string>
#include <vector>
#include "salary_model.h"
#include "salary_repo.h"

//throw error classes
#include "InvalidSalary.h"

using namespace std;

class Salary_service : private Salary_repo
{
    public:
        Salary_service();
        virtual ~Salary_service();

        bool validateSalary();

        void getSalarySSN(int ssn);
        void getSalaryForYearSSN(int year, int ssn);
        void getMaxSalaryYear(int year);

    protected:

    private:
};

#endif // SALARY_SERVICE_H
