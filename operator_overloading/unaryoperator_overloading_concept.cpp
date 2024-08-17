#include<iostream>
using namespace std;
class ope{
	private:
		int a;
	public:
		ope(int digit){
			a=digit;
		}
		int over(){
			return a;
		}
//	postfix k liye bas int likhna h , prefix k liye nhi likhna
		int operator++(int){
			int temp;
			temp= a++;
			return temp;
		}
int operator++(){
			return ++a;
		}
};
int main(){
	ope obj(5);
	cout<<++obj;
	cout<<obj++;
}





