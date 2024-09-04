//Create a base class Person with a constructor that initializes
// name and age. Derive a class Employee from Person and add a 
// constructor that initializes name, age, and employeeID. 
// Demonstrate the use of these classes in the main() function.
#include<iostream>
using namespace std;
class Person{
	private:
		int age;
		 string name;
	public:
		Person(int a, string n){
			age=a; name=n;
		}
		void p_show(){
			cout<<"age, name of parent is "<<age<<" "<<name<<endl;
		}		
};
class Employee: public Person{
	private:
		string n;
		 int a, id;
	public:
		Employee(string na, int ag, int i):Person(ag, na){
			n=na;
			a=ag;
			id=i;
		}
		void c_show(){
			cout<<"age, name, id of child is "<<a<<" "<<n<<" "<<id<<endl;
		}		
};
int main(){
	Person p(2, "__person__");
	p.p_show();
	
	Employee E("__emp__",222, 4);
	E.c_show();
	
	E.p_show();
}



  
