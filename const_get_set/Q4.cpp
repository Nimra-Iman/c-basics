// Write a C++ program to create a class called Car 
// that has private member 
//variables for company, model, and year. Implement
// member functions to get and set 
//these variables. 
#include<iostream>
using namespace std;
class Car{
	private:
		string model;
		string company;
		int year;
	public:
		Car(string m, string c, int y){
			model=m;
			company=c;
			year=y;
		}
		void get(){
			cout<<"model, company and year is : "<<model <<" "<<company<<" "<<year<<" ";
		}
		void set(string m, string c, int y){
			model=m;
			company=c;
			year=y;
		}
		
};

int main(){
	Car obj("XYZ","ABC",2018);
	obj.get();
	cout<<" model, company and year is now chnaged: ";
	obj.set("XXYYZZ","AZBZCZ",2016);
	obj.get();
}





