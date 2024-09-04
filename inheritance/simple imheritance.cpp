#include<iostream>
using namespace std;
//inheritance
class P{
	private:
		int a,b;
	public:
		P(int x, int y){
			a=x; b=y;
		}
		void show1(){
			cout<<"a and b in parent is: "<<a<<b<<endl;
		}
		void parent(){
			cout<<"i am parent";
		}
};
class C: public P{
	public:
		C (int x,int y): P(a,b){
			
		}
		void child(){
		cout<<"i am child";
		}
//		void show(){
//			cout<<"a+b in child is "<<x+y<<endl;
//		}
};
int main(){
	P obj(2,3);
	cout<<"parent show: ",obj.show1();
	C obj2(3,4);
	cout<<"parent show via child : ",obj2.show1();
	cout<<"child show : ",obj2.show();
}
