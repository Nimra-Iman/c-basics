#include<iostream>
using namespace std;
template <typename t, typename r>t func(t a, r b){
	cout<<a<<" "<<b;
}
int main(){
	func<int,float>(2,3.3);
}





