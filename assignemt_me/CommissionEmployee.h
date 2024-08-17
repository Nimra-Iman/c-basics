//CommissionEmployee.h has just header files which include just function decalaration
//, it does not have body of function
//
//CommissionEmployee.cpp has functions body that are declarated in
//CommissionEmployee.h means that are declarated in header file
//
//fig12.06.cpp is the main file that uses above files for calling functions and 
//passing values etc

// Fig. 12. 4: CommissionEmployee.h
// Commission Employee class definition represents a commission employee.






#ifndef COMMISSION_H
#define COMMISSION_H    //These both are used to prevent multiple inclusions of the header file.
//ta k y header file koi bar bar na bnay

#include <string> // C++ standard string class
using std::string;

class CommissionEmployee {
public:
    // Constructor
    CommissionEmployee(string f_name, string l_name, string num, double = 0.0, double = 0.0);
    
    // Setters and getters
    void setFirstName(string f_name); 
    string getFirstName();

    void setLastName(string l_name); 
    string getLastName();

    void setSocialSecurityNumber(string num); 
    string getSocialSecurityNumber();

    void setGrossSales(double); 
    double getGrossSales();

    void setCommissionRate(double); 
    double getCommissionRate();

    double earnings(); // Calculate earnings
    void print(); // Print CommissionEmployee object

private:
    // Private data members
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales; // Gross weekly sales
    double commissionRate; // Commission percentage
}; // end class CommissionEmployee

#endif // COMMISSION_H

