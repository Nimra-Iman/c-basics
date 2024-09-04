#include<iostream>
using namespace std;

// Define the bell manipulator
ostream& bell(ostream& output) {
    return output << '\a';  // '\a' is the alert (beep) character
}

int main() {
    // Use the bell manipulator
    cout << bell;
    return 0;
}

