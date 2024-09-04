#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream obj;
	string s;
	obj.open("C:\\Users\\J11\\Desktop\\myfile.txt");
	while(getline(obj, s)){
		cout<<s;
	}
	obj.close();

}
