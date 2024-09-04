#include<iostream>
using namespace std;
template <typename v>class cls{
	v a;
	v b;
	public:
		cls(v x,v y){
			a=x; b=y;
		}
		void show(){
			cout<<a<<" "<<b;
		}
};
int main(){
	cls<int> obj(2,3);
	obj.show();
}
