#ifndef SALARY_SERVICE_H
#define SALARY_SERVICE_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include "salary_model.h"
#include "salary_repo.h"

using namespace std;

class Salary_service : private Salary_repo
{
    public:
        Salary_service();
        virtual ~Salary_service();

        bool validateSalary();

        void getSalarySSN(string ssn);
        void getSalaryForYearSSN(int year, string ssn);
        void getMaxSalaryYear(int year);

    protected:

    private:
};

#endif // SALARY_SERVICE_H
