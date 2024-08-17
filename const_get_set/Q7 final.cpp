// Write a C++ program to implement a class called
//  Employee that has private 
//member variables for name, employee ID, and salary. 
//Include member functions to 
//calculate and set salary based on employee performance.
#include<iostream>
using namespace std;
class Employee{
	private:
		string id;
		float salary;
		string name;
	public:
		Employee(string i, float s){
			id =i;
			salary=s;
		}
		void calculate_salary(){
//			int id,sal;
//			cout<<"enter your id and salary"<<endl;
//			cin>>id>>sal;
			if (id=="A"){
				cout<<"your salary is increased by 10%"<<endl;
				salary=salary+(salary*0.1);
				cout<<"salary is: "<<salary;
			}
			else if (id=="B"){
				cout<<"your salary is increased by 5%"<<endl;
				salary=salary+(salary*0.05);
				cout<<"salary is: "<<salary;
			}
			else if (id=="C"){
				cout<<"your salary is increased by 2%"<<endl;
				salary=salary+(salary*0.02);
				cout<<"salary is: "<<salary;
			}
			else{
				cout<<"enter id 'A' OR 'B' OR 'C'";
			}
		}
};
int main(){
	string id;
	float sal;
	cout<<"enter your id and salary"<<endl;
	cin>>id>>sal;
	Employee obj(id,sal);
	obj.calculate_salary();
}




 
