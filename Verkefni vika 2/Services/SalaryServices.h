#ifndef SALARYSERVICES_H
#define SALARYSERVICES_H

#include "EmployeeRepo.h"
#include "Employee.h"
#include "Salary.h"

class SalaryServices
{
    public:
        SalaryServices();
        virtual ~SalaryServices();
        void CreateSalary(Employee employee);
        void DisplaySalary(Employee employee);
        bool validSalary(Salary& salary);

    protected:

    private:
};

#endif // SALARYSERVICES_H
