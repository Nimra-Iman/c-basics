//Create two classes, ClassA and ClassB, each with a private integer member.
// Write a friend function to swap the values of these members.

#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		A(int x){
			a=x;
		}
		friend void swap(A,B);
};
class B{
	int b;
	public:
		B(int y){
			b=y;
		}
	friend void swap(A,B);	
		
};
void swap(A r1, B r2){
	int temp;
	 temp=r1.a;
       r1.a=r2.b;
       r2.b=temp;
    cout<<"value of A class a is: "<<r1.a;
    cout<<"value of B class b is : "<<r2.b;
	
}
int main(){
	A obj1(2);
	B obj2(3);
	swap(obj1, obj2);
}




