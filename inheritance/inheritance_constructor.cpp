#include<iostream>
using namespace std;

class parent {
private:
    int a, b;
public:
    parent(int x, int y) {
        a = x;
        b = y;
    }
    void show() {
        cout << "parent function" << endl;
    }
    void sum(){
    	cout <<endl<<"sum is "<<a+b;
	}
};

class child : public parent {
private:
    int s, d;
public:
    child(int n, int m, int x, int y) : parent(x, y) {
        s = n;
        d = m;
    }
    void show_child() {
        cout << "inside child" << endl;
    }
};

int main() {
	parent obj2(1,1);
    child obj1(1, 2, 3, 4); // Pass appropriate arguments for both child and parent constructors
    obj1.show_child();
    obj1.show();
    obj1.sum();

    return 0;
}

