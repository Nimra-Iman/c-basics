//Write a template function swap that swaps the values of two variables
// of the same type.
#include<iostream>
using namespace std;
template <typename T>T swap(T a, T b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"now, A is: "<<a<<endl;
	cout<<"now B is: "<<b<<endl;	
}
int main(){
	cout<<"A is 2"<<endl;
	cout<<"B is 3"<<endl;
	swap<int>(2,3);
}




