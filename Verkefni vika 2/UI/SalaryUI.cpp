#include "SalaryUI.h"

SalaryUI::SalaryUI()
{

}

SalaryUI::~SalaryUI()
{
    //dtor
}
void SalaryUI::SalaryMenu(){
    cout << "Hello and welcome" << endl;
    cout << "What do you want to do today" << endl;
    cout << "Please select from the available options" << endl << endl;
    cout << "1: Add a salary record" << endl;
    cout << "2: Get all salary records for a certain employee" << endl;
    cout << "3: Get salary records for a certain year for selected employee" << endl;
    cout << "4: Get the name of the employee with highest salary for a given year" << endl;
    cout << "q: Quit the program" << endl;
}
void SalaryUI::getoptions(){
    char input;
    Salary newsalary;
    do{
        SalaryMenu();
        cin >> input;
        if(input == '1'){
            cout << "Add a new salary" << endl;
            SalaryServices salary;
            salary.validSalary();
        }
        else if(input == '2'){
            string ssn;
            EmployeeServices salary;
            cout << "Please select your employee's SSN" << endl;
            cin >> ssn;
            salary.LookForEmployeeSSN(ssn);
            cout << "All salaries with that ssn!" << endl;

        }
        else if(input == '3'){
            int year;
            string ssn;
            cout << "Please enter a year" << endl;
            cin >> year;
            cout << "Please enter a Social number" << endl;
            cin >> ssn;
            cout << "I do nothing, replace me!" << endl;
        }
        else if(input == '4'){
            //displays name of the highest
            cout << "The highest paid employee is: ";
            cout << "I do nothing replace me!" << endl;
        }
        else if(input == 'q'){
            exit(0);
        }
        else{
            cout << "Invalid input!" << endl;
        }
    }while(input != '1' && input != '2' && input != '3' && input != '4' && input != 'q');
}
