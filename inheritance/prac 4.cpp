//Create a base class Base with a constructor that initializes an integer
// member x. Derive a class Derived from Base and add a constructor that
//  initializes x (using the base class constructor) and an additional 
//  integer member y. Demonstrate the use of these classes in the main()
//function by creating an object of Derived and displaying the values of x 
//and y.
#include<iostream>
using namespace std;
class base{
	int x;
	public:
		base (int a){
			x=a;
		}
		void p(){
			cout<<"value of x in base is : "<<x<<endl;
		}
};
class derived: public base{
	int y;
	int x;
	public:
		derived(int c, int v):base(c){
			y=v;
			x=c;
		}
	void show(){
		cout<<"value of x and y in child is : "<<x<<" "<<y;
	}
};
int main(){
	base b(1);
	b.p();
	
	derived d(2,3);
	d.show();
	
	d.p();
}






