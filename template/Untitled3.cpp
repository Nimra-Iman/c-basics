#include<iostream>
using namespace std;
template <typename t>class A{
	t a, b;
	public:
		A(t x, t y){
			a=x; b=y;
		}
		 void show(){
		 	cout<<a+b;
		 }
};
int main(){
	A<string> obj("nimra","iman");
	obj.show();
}
