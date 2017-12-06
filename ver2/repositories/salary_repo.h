#ifndef SALARY_REPO_H
#define SALARY_REPO_H

#include "salary_model.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Salary_repo
{
    public:
        Salary_repo();
        virtual ~Salary_repo();

        void writeSalary(string nm, int ssn, double sal, int mon, int yr);
        vector<Salary_model> readSalary();

    protected:

    private:
};

#endif // SALARY_REPO_H
