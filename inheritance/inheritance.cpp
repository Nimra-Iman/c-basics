#include<iostream>
using namespace std;
class parent{
	public:
		void show(){
			cout<<"parent function";
		}
};
class child: public parent{
	public:
		void show_child(){
			cout<<"inside child";
		}
};
int main(){
	child obj1;
	obj1.show_child();
	obj1.show();
}

