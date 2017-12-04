#ifndef EMPLOYEEREPO_H
#define EMPLOYEEREPO_H
#include "Employee.h"
#include <fstream>

class EmployeeRepo
{
    public:
        EmployeeRepo();
        virtual ~EmployeeRepo();
        void addNewEmployee();

    protected:

    private:
};

#endif // EMPLOYEEREPO_H
