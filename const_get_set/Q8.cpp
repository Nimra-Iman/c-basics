//Write a C++ program to implement a class called Date 
//that has private member 
//variables for day, month, and year. Include member 
//functions to set and get these 
//variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class Date{
	private:
		int day, month, year;
	public:
		Date(int d, int m, int y){
			day=d;
			month=m;
			year=y;
		}
		int getday(){
//			cout<<"day, month and year is = ";
			return day;
		}
		int getmonth(){
			return month;
		}
		int getyear(){
			return year;
		}
		void set(int da, int mo, int ye){
			day=da;
			month=mo;
			year=ye;
		}		
};
int main(){
Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include member 
functions to calculate the grade based on the marks and display the student's 
information.	int date, month, year,input;
	cout<<"enter date, month, year"<<endl;
	cin>>date>>month>>year;
	Date obj(date,month,year);
	cout<<"day, month and year is "<<obj.getday()<<"-"<<obj.getmonth()<<"-"<<obj.getyear();
	cout<<endl<<"ENTER 1 IF YOU WANN'A CHANGE DATE";
	cin>>input;
	if(input==1){
		cout<<"enter date, month, year"<<endl;
		cin>>date>>month>>year;
		obj.set(date,month,year);
		cout<<"so new day, month and year is "<<obj.getday()<<"-"<<obj.getmonth()<<"-"<<obj.getyear();
	
	}
	
	
}

 
