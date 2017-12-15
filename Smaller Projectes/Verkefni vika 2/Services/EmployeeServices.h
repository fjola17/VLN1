#ifndef EMPLOYEESERVICES_H
#define EMPLOYEESERVICES_H

#include "EmployeeRepo.h"
#include <string>

class EmployeeServices
{
    public:
        EmployeeServices();
        virtual ~EmployeeServices();
        void displayEmployees();
        void LookForEmployeeSSN(string ssn);
        void calculateSalary();

    protected:

    private:
};

#endif // EMPLOYEESERVICES_H
