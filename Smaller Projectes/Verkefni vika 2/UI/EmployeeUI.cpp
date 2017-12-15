#include "EmployeeUI.h"

EmployeeUI::EmployeeUI()
{
    employeeMenu();
}

EmployeeUI::~EmployeeUI()
{
    //dtor
}
void EmployeeUI::employeeOptions(){
    cout << "Employee menu" << endl;
    cout << "What do you want to do" << endl;
    cout << "1: add a new employee" << endl;
    cout << "2: display all employees" << endl;
    cout << "q: go back" << endl;
}
void EmployeeUI::employeeMenu(){
    Employee employee;
    char input;
    do{
        employeeOptions();
        cin >> input;
        if(input == '1'){
            cout << "Add a new employee" << endl;
            SalaryServices emp;
            cin >> employee;
            EmployeeUI ui;
        }
        else if(input == '2'){
            cout << "view all Employees" << endl;
            SalaryServices salary;
            EmployeeUI ui;
        }
        else if(input == 'q'){
            SalaryUI ui;
        }
        else{
            cout << "Invalid input" << endl;
        }
    }while(input !='1' && input != '2' && input != 'q');
}
