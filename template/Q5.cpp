//Write a template function areEqual that takes two arguments
// of the same type and 
//returns true if they are equal, and false otherwise
#include<iostream>
using namespace std;
template <typename T>T areEqual(T A, T B){
	if(A==B){
		cout<<"both are equal";
	}
	else{
		cout<<"both are unequal";
	}
}
int main(){
	areEqual<int>(2,3);
}




