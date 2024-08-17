//Implement a template class Pair that represents a pair 
//of values of the same type
#include<iostream>
#include <typeinfo>
using namespace std;
template <typename T>class Pair{
	private:
		T a;
		T b;
	public:
		Pair(T x, T y){
			a=x ; b=y;
		}
	void show(){
		if (typeid(a)==typeid(b)){
			cout<<"a and b have same type id";
		}
	}
};
int main(){
	Pair<int> obj(1,2);
	obj.show();
}
