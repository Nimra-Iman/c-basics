// Fig. 12. 5: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.

#include <iostream>
using std::cout;
#include "CommissionEmployee.h" // CommissionEmployee class definition

// Constructor
CommissionEmployee::CommissionEmployee(string f_name, string l_name, string num, double sales, double rate)
    : firstName(f_name), lastName(l_name), socialSecurityNumber(num), grossSales(sales), commissionRate(rate) {
    setGrossSales(sales); // Validate and store gross sales
    setCommissionRate(rate); // Validate and store commission rate
}

// Setters and Getters
void CommissionEmployee::setFirstName(string first) {
    firstName = first; // Should validate
}

string CommissionEmployee::getFirstName() {
    return firstName;
}

void CommissionEmployee::setLastName(string last) {
    lastName = last; // Should validate
}

string CommissionEmployee::getLastName() {
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(string ssn) {
    socialSecurityNumber = ssn; // Should validate
}

string CommissionEmployee::getSocialSecurityNumber() {
    return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales) {
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() {
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() {
    return commissionRate;
}

// Calculate earnings
double CommissionEmployee::earnings() {
    return grossSales * commissionRate;
}

// Print CommissionEmployee object
void CommissionEmployee::print() {
    cout << "Commission employee: " << firstName << ' ' << lastName
         << "\nSocial security number: " << socialSecurityNumber
         << "\nGross sales: " << grossSales
         << "\nCommission rate: " << commissionRate;
}

