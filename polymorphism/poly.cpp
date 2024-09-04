#include<iostream>
using namespace std;
class p{
	int a,b;
	public:
		public:
		virtual void show(){
			cout<<"this is parent";
		}
};
class c: public p{
	public:
		void show(){
			cout<<"this is child";
		}
};
int main(){
	p parent;
	c child;
	p *ptr;
	ptr=&parent;
	ptr->show();
	
	ptr=&child;
	ptr->show();
}




