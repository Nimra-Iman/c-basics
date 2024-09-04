//Create two base classes Flyer and Swimmer. Flyer should have a
// method fly() and Swimmer should have a method swim(). Derive a 
// class Duck from both Flyer and Swimmer. In the Duck class, add a
//  method quack() that prints "Quack!". Demonstrate the use of these
//   classes in the main() function.
#include<iostream>
using namespace std;
class Flyer{
	public:
		void fly(){
		cout<<"flyyyyy"<<endl;	
		}
};
class Swimmer{
public:
	void swim(){
		cout<<"swimmmmm"<<endl;
	}
};
class duck: public Flyer, public Swimmer{
	public:
		void quack(){
			cout<<"quack! quack!"<<endl;
		}
};
int main(){
	Flyer f;
	f.fly();
	
	Swimmer s;
	s.swim();
	
	duck d;
	d.quack();
	
	d.fly();
	d.swim();
	
	
}





