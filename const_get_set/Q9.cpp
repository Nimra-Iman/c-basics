//Write a C++ program to implement a class called 
//Student that has private 
//member variables for name, class, roll number, and marks.
// Include member 
//functions to calculate the grade based on the marks 
//and display the student's 
//information.
#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll_number,class_;
	public:
		Student(string n, int roll, int c){
			name=n;
			roll_number=roll;
			class_=c;
		}
		void grade(int total_m,int obtained_m){
			float percentage=(total_m/obtained_m)*100;
			if (percentage>80){
				cout<<endl<<"your grade is A";
			}
			else if (percentage<80 && percentage >=50){
				cout<<endl<<"your grade is B";
			}
			else{
				cout<<endl<<"your grade is C";
			}
		}
		void display_info(){
			cout<<endl<<"student with this information has this grade ";
			cout<<name<<"_"<<roll_number<<"_"<<class_;
		}
		
		
};
int main(){
	string name;
	int roll_number,class_;
	int total_ma, obtained_ma;
	cout<<"enter name, roll_number, class"<<endl;
	cin>>name>>roll_number>>class_;
	Student obj(name, roll_number, class_);
	cout<<endl<<"To calculate grade, enter obtained marks and total marks"<<endl;
	cin>>total_ma>>obtained_ma;
	obj.display_info();
	obj.grade(total_ma,obtained_ma);
}





