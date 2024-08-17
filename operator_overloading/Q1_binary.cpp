//Write a C++ program to overload the binary addition 
//operator (+) for a 
//Complex class, which has two private data members: real and imag.
// The overloaded 
//binary addition operator should return a new Complex object
// that represents the sum of 
//two complex numbers.
#include<iostream>
using namespace std;
class ope{
	private:
		int real,imag;
	public:
		ope(int r, int i){
			real=r;
			imag=i;
		}
		ope operator+(ope b){
			ope temp(0,0);
			temp.real=real + b.real;
			temp.imag=imag + b.imag;
			return temp;
		}
		void display_sum(){
			cout<<real<<"  ,,  "<<imag;
		}
};
int main(){
	ope obj1(2,3);
	ope obj2(2,3);
	ope sum(0,0);
	sum=obj1+obj2;
	sum.display_sum();
}



