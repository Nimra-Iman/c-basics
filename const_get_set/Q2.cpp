//Write a C++ program to create a class called Rectangle
// that has private member 
//variables for length and width. Implement member
// functions to calculate the 
//rectangle's area and perimeter. 

#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int width;
	public:
		Rectangle(int l , int w){
			length=l;
			width=w;
		}
		float area(){
			cout<<"area is : "<<length*width;
		}
		float perimeter(){
			cout<<"parimeter is :"<< (length + width)*2;
		}
};
int main(){
	Rectangle obj(2,3);
	obj.area();
	obj.perimeter();
;}


