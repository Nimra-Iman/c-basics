#include<iostream>
using namespace std;
class parent{
	public:
	 virtual void show()
		{
			cout<<"this is parent"<<endl;
		}
};
class child: public parent{
	public:
		void show(){
			cout<<"this is child"<<endl;
		}
};
class grand: public parent{
	public:
		void show(){
			cout<<"this is grand"<<endl;
		}
};
int main(){
	parent obj1;
	child obj2;
	grand obj3;
	parent *ptr;
	
	ptr = &obj1;
	ptr->show();
	
	ptr = &obj2;
	ptr->show();
	
	ptr = &obj3;
	ptr->show();
}






