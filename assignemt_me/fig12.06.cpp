// Fig. 12. 6: fig12.06.cpp
// Testing class Commission Employee.

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "CommissionEmployee.h" // Commission Employee class definition
#include "CommissionEmployee.cpp"  ////////////////////////////////////////

int main()
{
    // instantiate a Commission Employee object
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, 0.06);
    
    // set floating-point output formatting
    cout << fixed << setprecision(2);

    // get commission employee data
    cout << "Employee information obtained by get functions:\n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is " << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate() << endl;

    // set new gross sales and commission rate
    employee.setGrossSales(8000); // set gross sales
    employee.setCommissionRate(0.1); // set commission rate

    // display the updated employee information
    cout << "\nUpdated employee information output by print function:\n";
    employee.print();

    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

    return 0;
} // end main

