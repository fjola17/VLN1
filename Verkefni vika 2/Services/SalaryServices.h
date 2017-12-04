#ifndef SALARYSERVICES_H
#define SALARYSERVICES_H

#include "EmployeeRepo.h"
#include "Employee.h"

class SalaryServices
{
    public:
        SalaryServices();
        virtual ~SalaryServices();
        void CreateSalary(Employee employee);

    protected:

    private:
};

#endif // SALARYSERVICES_H
