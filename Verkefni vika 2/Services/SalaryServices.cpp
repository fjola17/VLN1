#include "SalaryServices.h"

SalaryServices::SalaryServices()
{
    //ctor
}

SalaryServices::~SalaryServices()
{
    //dtor
}
void SalaryServices::CreateSalary(Employee employee){
    EmployeeRepo emp;
    emp.addNewEmployee(employee);
}

void SalaryServices::DisplaySalary(Employee employee){
    EmployeeRepo emp;
    emp.ReadAllEmployees(employee);
}

