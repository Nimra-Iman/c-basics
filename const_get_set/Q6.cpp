//Write a C++ program to create a class called Triangle that
// has private member 
//variables for the lengths of its three sides. Implement
// member functions to 
//determine if the triangle is equilateral, isosceles, 
//or scalen
#include<iostream>
using namespace std;
class Triangle{
	private:
	int l1,l2,l3;
	public:
		Triangle(int len1, int len2,int len3){
			l1=len1;
			l2=len2;
			l3=len3;
		}
		void type(){
		
//			cout<<"enter three sides of triangle:";
//			cin>>a;
//			cin>>b;
//			cin>>c;
			if(l1==l2==l3){
				cout<<"triangle is equilateral";
			}
			else if(l1!=l2 && l1!=l3 && l2!=l3){
				cout<<"triangle is scalen";
			}
			else{
				cout<<"triangle is isosceles";
			}
		}
};
int main(){
	int a,b,c;
	cout<<"enter three sides of triangle:";
			cin>>a;
			cin>>b;
			cin>>c;
	Triangle obj(a,b,c);
	obj.type();
}





