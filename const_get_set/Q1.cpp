//Write a C++ program to implement a class called Circle
// that has private member 
//variables for radius. Include member functions to 
//calculate the circle's area and 
//circumference. 

#include<iostream>
using namespace std;

class Circle{
	private:
	int r;
	public:
	Circle(int radius){
		 r=radius;
	}
		float area(){
			cout<<"the are of circle is "<< 3.14*r*r;
		}
		float circumference(){
			cout<<"the circumference is "<<2*3.14*r;
		}
};
int main(){
	Circle obj(2);
	obj.area();
	obj.circumference();
	
	
}
