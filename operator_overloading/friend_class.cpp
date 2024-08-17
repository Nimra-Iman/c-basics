#include<iostream>
using namespace std;
class demo{
	private: 
	int a, b;
	public:
		demo(int x, int y){
			a=x;b=y;
		}
		friend class B;
};
class B{
	private:
		int p,q;
	public:
		B(int n, int m){
			p=n;q=m;
	}
	void sum(demo r){
		cout<<"sum of demo elements is: "<<r.a+r.b;
	}
	void sum(){
		cout<<"sum of class B elements is: "<<p+q;
	}
};
int main(){
	demo obj1(2,3);
	B obj2(1,2);
	obj2.sum(obj1);
	obj2.sum();
}
