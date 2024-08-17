//static data members and statis member functions
//static data members:
//			they make single copy of variable for all objects of class
//			 agar class k 5 objcets hn or hm n class bny huy static data
//			member ki valyue 5 rkh di to vo sab m 5 hi jay gi
//statis member functions:
//			they can only access stayic data members, and it can also be
// 			accessed without object	
#include<iostream>
using namespace std;
class demo{
	private:
		int a;
		static int b;
	public:
		demo(int x, int y){
			a=x; b=y;
		}
		void show(){
			cout<<" a and b are: "<<a<<" "<<b;
		}
		static void func(){
			cout<<"static data members is : "<<b;
		}
};
int demo::b=0;
int main(){
	demo obj1(2,3);
	obj1.show();
//	obj1.func(); can also be accessed like below:
	demo::func();  // ab yhan value 3 ho gi
	
	demo obj2(1,1);
	obj2.show();
	obj1.func();  // ab yhan value 1 hi ho gi
}




