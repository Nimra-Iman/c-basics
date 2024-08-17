//Write a C++ program to overload the unary minus operator (-) for a 
//Vectorclass, which has two private data members: x and y. The overloaded
// unary minus 
//operator should return a new Vector object with the negated x
// and y values
#include<iostream>
using namespace std;
class ope{
	int x,y;
	public:
		ope(int a, int b){
			x=a;
			y=b;
		}
		ope operator-(){
			cout<<-x<<endl<<-y;
		}	
};
int main(){
	ope obj(2,4);
	-obj;
}
