//Write a C++ program to overload the binary subtraction operator (-)
// for a Date
//class, which has three private data members: year, month, and day.
// The overloaded binary 
//subtraction operator should return an int value that represents 
//the number of days between two dates.
#include<iostream>
using namespace std;
class Date{
	private:
		int date, month, year;
	public:
		Date(int d, int m, int y){
			date=d;
			month=m;
			year=y;
		}
		Date operator-(Date b){
			Date temp(0,0,0);
			temp.date= date - b.date;
			return temp;
		}
		void show(){
			cout<<"difference in days= ";
			cout<<date;
		}
};
int main(){
	Date obj1(10,10,24);
	Date obj2(21,12,24);
	Date obj3(0,0,0);
	obj3=obj2-obj1;
	obj3.show();
}





