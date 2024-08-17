//unary opeartor
#include<iostream>
#include<string>
using namespace std;
class demo{
	int a;
	public:
		demo(int x){
			a=x;
		
		}
		int operator++(int){
			int temp;
			temp=a++;
			return temp;
		}
		void show(){
			cout<<"incvremebt is : "<<a;
		}
};
int main(){
	string a;
	cout<<"enter string";
	getline(cin, a);
	
}






