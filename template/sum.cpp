#include<iostream>
using namespace std;
template <typename T> T myfunc(T a, T b){
	return a+b;
}
int main(){
	cout<<myfunc<int>(3,2)<<endl;
	cout<<myfunc<double>(3.2,5.6)<<endl;
	cout<<myfunc<char>('A','B')<<endl;
}
