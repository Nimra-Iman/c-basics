//Write a C++ program to overload the unary postfix decrement 
//operator (--) for 
//a Time class, which has three private data members: hours,
// minutes, and seconds. The 
//overloaded unary postfix decrement operator should decrement the 
//time by 1 second and 
//return the original time.
#include<iostream>
using namespace std;
class ope{
	private:
		int h, m, s;
	public:
		ope(int hour, int minute, int sec){
			h=hour;
			m=minute;
			s=sec;
		}
		int show(){
			cout<<h<<":"<<m<<":"<<s;
		}
		int operator--(int){
			int temp;
			temp=--s;
			cout<<h<<":"<<m<<":"<<temp;
		}
		
};
int main(){
	ope obj(2,3,4);
	cout<<"before: ";
	obj.show();
	cout<<endl;
	cout<<"after: ",obj--;

}



