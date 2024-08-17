//Design a Fraction class in C++ and overload the unary prefix
// increment 
//operator (++) to increment the fraction by 1. The overloaded 
//unary prefix increment 
//operator should update the numerator and denominator accordingly
#include<iostream>
using namespace std;
class ope{
	private:
		int a, b;
	public:
		ope(int x, int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<a<<"/"<<b;
		}
		int operator++(){
			cout<<++a<<"/"<<++b;
		}
};
int main(){
	ope obj(2,3);
	cout<<"before: ",obj.show();
	cout<<endl<<"after: ";
	++obj;
}




