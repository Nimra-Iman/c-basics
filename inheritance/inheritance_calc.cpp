#include<iostream>
using namespace std;
class p{
	private:
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
	int y,z;
	public:
		c(int c, int v):p(c,v){
			y=c; z=v;
		};
	void mul(){
		cout<<y*z<<endl;
	}
	void div(){
		cout<<y/z<<endl;
	}
	
};
int main(){
	c c(4,20);
	c.sum();
	c.sub();
	c.mul();
	c.div();
}
