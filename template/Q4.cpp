//Implement a template class Stack that represents a stack of
// elements of a given type.
#include<iostream>
using namespace std;
template <typename T>T Stack(T a, T b){
	cout<<"A is : "<<a<<endl;
	cout<<"B is : "<<b;
}
int main(){
	Stack<int>(2,3);
}




