#include "Salary_ui.h"

Salary_ui::Salary_ui()
{
    this->getInput();
}

Salary_ui::~Salary_ui()
{
    //dtor
}

void Salary_ui::displayMenu(){
    cout << "1. Add a Salary record\n2. Get all Salary records for a given SSN\n3. Get a total Salary for a given year and a given SSN\n4. Get the name of the employee with the highest total Salary for a given year\n5. Quit" << endl;
}

void Salary_ui::getInput(){
    system("pause");
    system("cls");
    this->displayMenu();

    cout << "You may select an option now: " << endl;
    cin >> user_input;

    //clear user_input, because of self invoking function
    //if you don't do this, it creates an infinite loop
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // *************************

    // basically this is a lazy try catch for NAN exception
    // to_string() will return 0 if it failed to convert
    if(to_string(user_input) != "0"){
       switch(user_input){
            case 5:
                //Do nothing, it'll quit
            break;
            case 1:
                if(!Salary_service::validateSalary()){
                    //data failed to save, for one or another reason
                    this->getInput();
                }else{
                    //data saved
                    this->getInput();
                }
                break;
            case 2:
                int ssn1;
                cout << "Input:\nSSN: (example : 123123)" << endl;
                cin >> ssn1;

                Salary_service::getSalarySSN(ssn1);
                this->getInput();
                break;
            case 3:
                int ssn2, year1;
                cout << "Input:\nSSN: (example : 123123)\nYear : (1900+)" << endl;
                cin >> ssn2 >> year1;

                Salary_service::getSalaryForYearSSN(year1, ssn2);
                this->getInput();
                break;
            case 4:
                int year2;
                cout << "Input:\nSSN:\nYear : (1900+)" << endl;
                cin >> year2;

                Salary_service::getMaxSalaryYear(year2);
                this->getInput();
                break;
            default:
                cout << "Not an option" << endl;
                this->getInput();
                break;
        }
    }else{
        cout << "Wrong input" << endl;
        this->getInput();
    }
}
