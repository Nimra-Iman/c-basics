//Create a String class in C++ and overload the binary concatenation operator 
//(+) to concatenate two strings. The overloaded binary concatenation
// operator should 
//return a new String object that represents the concatenation
// of two strings
#include<iostream>
#include<string>
using namespace std;
class String{
	private:
		string str1;
		string str2;
	public:
		String(string s1, string s2){
			str1=s1;
			str2=s2;
		}
		String operator+(String b){
			String temp("","");
			temp.str1=str1+b.str1;
			temp.str2=str2+b.str2;
			return temp;
		}
		void show(){
			cout<<"concatenated strings are: "<<str1 << " " <<str2;
		}
};
int main(){
	String obj1("nimra ","nimra2 ");
	String obj2("iman ","iman2 ");
	String concat("","");
	concat=obj1+obj2;
	concat.show();
	
	
}






