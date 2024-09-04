#include<iostream>
using namespace std;
class p{
	protected:
//		basic calcualor
	int a, b;
	public:
		p(int x, int y){
			a=x; b=y;
		}
		void sum(){
			cout<<a+b<<endl;
		}
		void sub(){
			cout<<a-b<<endl;
		}
};
class c: public p{
//	scientific calculator
	public:
		c(int c, int v):p(c,v){
		};
	void mul(){
		cout<<a*b<<endl;
	}
	void div(){
		cout<<a/b<<endl;
	}
	
};
int main(){
	c c(4,20);
	c.sum();
	c.sub();
	c.mul();
	c.div();
}
