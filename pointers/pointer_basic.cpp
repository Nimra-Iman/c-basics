#include<iostream>
using namespace std;
int main(){
	int a=5;
	int *p=&a;
	cout<<"a "<<a<<endl;
	cout<<"address of a "<<&a<<endl;
	cout<<"address of \'a\' via pointer "<<p<<endl;
	cout<<"value of \'a\' via pointer is "<<*p<<endl;
	
	
}
