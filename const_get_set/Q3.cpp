// Write a C++ program to create a class called Person that
//  has private member 
//variables for name, age and country. Implement
// member functions to set and get the 
//values of these variables.
#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
		string country;
		public:
	Person(string n, int a, string c){
		name=n;
		age=a;
		country=c;
	}
	void get(){
		cout<<"name, age, country is : "<<name<< "\t"<< age<<"\t"
		<< country;
	}
	
	void set(string na, int ag, string con){
		name=na;
		age=ag;
		country=con;
	}
}; 
int main(){
	int a;
	string n,c;
	Person obj("nimra",21,"Pk");
	obj.get();
	cout<<"enter your name, age, country";
	cin>>n>>a>>c;
	obj.set(n,a,c);
	obj.get();
}



