#include<iostream>
using namespace std;
class p{
	public:
		void show(){
			cout <<"i ma parent";
		}
};
class c: public p{
	public:
		void show(){
			cout <<"i ma child";
		}
};
int main(){
	p obj1;
	c obj2;
	p *prt;
	prt=&obj1;
	prt->show();
	
	prt = &obj2;
	prt->show();
//	obj2.show();
}






