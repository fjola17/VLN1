#ifndef EMPLOYEEREPO_H
#define EMPLOYEEREPO_H

#include "Employee.h"

#include <fstream>
#include <iostream>
using namespace std;

class EmployeeRepo
{
    public:
        EmployeeRepo();
        virtual ~EmployeeRepo();
        void addNewEmployee(Employee employee);
        void ReadAllEmployees(Employee employee);

    protected:

    private:
};

#endif // EMPLOYEEREPO_H
