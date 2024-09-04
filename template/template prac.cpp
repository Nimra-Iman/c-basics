#include<iostream>
using namespace std;
template <typename T> T func(T a, T b){
	T result;
	result=a+b;
	return result;
}
int main(){
	cout<<func<float>(2.1,3.2)<<endl;
	cout<<func<int>(2,2)<<endl;
	cout<<func<string>("nimra"," iman");
}





