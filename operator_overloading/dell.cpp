#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor
    Counter() : count(0) {}

    // Overload the pre-increment operator
    Counter& operator++() {
        ++count; // Increment count
        return *this; // Return the updated object
    }

    // Overload the post-increment operator
    Counter operator++(int) {
        Counter temp = *this; // Create a copy of the object
        ++count; // Increment count
        return temp; // Return the old value
    }

    // Function to display the count
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1;

    cout << "Initial count: ";
    c1.display();

    ++c1; // Pre-increment
    cout << "After pre-increment: ";
    c1.display();

    c1++; // Post-increment
    cout << "After post-increment: ";
    c1.display();

    return 0;
}
