// Fig. 12. 5: CommissionEmployee.cpp
// Class Commission Employee member-function definitions.

#include <iostream>
using std::cout;
#include "CommissionEmployee.h" // Commission Employee class definition

// Constructor
CommissionEmployee::CommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate) 
    : firstName(first), lastName(last), socialSecurityNumber(ssn), grossSales(sales), commissionRate(rate) {
    setGrossSales(sales); // Validate and store gross sales
    setCommissionRate(rate); // Validate and store commission rate
}

// Setters and Getters
void CommissionEmployee::setFirstName(const string &first) {
    firstName = first; // Should validate
}

string CommissionEmployee::getFirstName() const {
    return firstName;
}

void CommissionEmployee::setLastName(const string &last) {
    lastName = last; // Should validate
}

string CommissionEmployee::getLastName() const {
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn) {
    socialSecurityNumber = ssn; // Should validate
}

string CommissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales) {
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

// Calculate earnings
double CommissionEmployee::earnings() const {
    return grossSales * commissionRate;
}

// Print CommissionEmployee object
void CommissionEmployee::print() const {
    cout << "Commission employee: " << firstName << ' ' << lastName
         << "\nSocial security number: " << socialSecurityNumber
         << "\nGross sales: " << grossSales
         << "\nCommission rate: " << commissionRate;
}

