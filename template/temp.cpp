#include<iostream>
using namespace std;
template <typename t>class mycls{
t b;
public:
mycls(t s){
	b=s;
	
}
void show(){
	cout<<b;
}};
int main(){
	mycls<int>obj(8);
	obj.show();
	return 0;
}
