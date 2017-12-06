#ifndef EMPLOYEESERVICES_H
#define EMPLOYEESERVICES_H

#include "EmployeeRepo.h"
#include "InvalidName.h"
#include "InvalidSSN.h"

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
