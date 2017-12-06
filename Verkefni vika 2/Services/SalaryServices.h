#ifndef SALARYSERVICES_H
#define SALARYSERVICES_H

#include "EmployeeRepo.h"
#include "Employee.h"
#include "Salary.h"
#include "InvalidSalary.h"
#include "InvalidMonth.h"
#include "InvalidYear.h"

class SalaryServices
{
    public:
        SalaryServices();
        virtual ~SalaryServices();
        void CreateSalary(Employee employee);
        void DisplaySalary(Employee employee);
        void validSalary(Salary& salary);

    protected:

    private:
};

#endif // SALARYSERVICES_H
