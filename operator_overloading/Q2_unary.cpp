//Create a String class in C++ and overload the unary not operator (!)
// to check if 
//the string is empty. The overloaded unary not operator should 
//return true if the string is 
//empty and false otherwise.
#include<iostream>
#include<string>
using namespace std;
class ope{
	private:
	string name;
	public:
	ope(string naam){
		name=naam;
	}
	bool operator!(){
		return name.empty();
	}
};
int main(){
	ope obj("nimra");
	if(!obj){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}



