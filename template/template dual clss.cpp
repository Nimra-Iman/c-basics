#include<iostream>
using namespace std;
template <typename t, typename r>class cls{
	private:
		t a;
		r b;
	public:
		cls(t x, r y){
			a=x;
			b=y;
		}
		r sum(){
			cout<<"int a and float b sum is : -> "<<a+b;
		}	
};
int main(){
	cls<int,float> obj(2,3.3);
	obj.sum();
}



