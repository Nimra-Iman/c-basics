#include<iostream>
using namespace std;
template<typename t>class myclass{
t a;
public:
	myclass(t b){
	a=b;
	}
void input(){
cout<<a;
	
}};
int main(){
	myclass <int>obj(4);
	obj.input();
	
}
