//Create a Vector class in C++ and overload the binary 
//multiplication operator 
//(*) to perform scalar multiplication. The overloaded
// binary multiplication operator should 
//return a new Vector object that represents the 
//product of a vector and a scalar value.
#include<iostream>
using namespace std;
class Vector{
	private:
		int vec, sca;
	public:
		Vector(int x, int y){
			vec=x;
			sca=y;
		}
		Vector operator*(Vector b){
			Vector temp(0,0);
			temp.vec=vec * b.vec;
			temp.sca=sca * b.sca;
			return temp;
		}
		void show(){
			cout<< "after multiplication: "<<vec<<" "<<sca;
			
		}	
};
int main(){
	Vector obj1(2,3);
	Vector obj2(2,3);
	Vector mul(0,0);
	mul=obj1*obj2;
	mul.show();
}





