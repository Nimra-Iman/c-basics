//Write a template function max that takes two arguments of the same type and 
//returns the maximum of the two

#include<iostream>
using namespace std;
template <typename T>T maxi(T a, T b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	cout<<"among 2 and 3 max is : ";
	cout<<maxi<int>(2,3);	
}




