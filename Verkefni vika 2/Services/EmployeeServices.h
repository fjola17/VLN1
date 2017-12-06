#ifndef EMPLOYEESERVICES_H
#define EMPLOYEESERVICES_H

#include "EmployeeRepo.h"

class EmployeeServices
{
    public:
        EmployeeServices();
        virtual ~EmployeeServices();
        void displayEmployees();
        void LookForEmployeeSSN(Employee employee);

    protected:

    private:
};

#endif // EMPLOYEESERVICES_H
