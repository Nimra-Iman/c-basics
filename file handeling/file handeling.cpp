#include<iostream>
#include<fstream>
using namespace std;
int main(){
				//	creating empty file 
//	ofstream obj;
//	obj.open("C:\\Users\\J11\\Desktop\\myfile.txt");
//	obj.close();
	

   				//  writing to a file
//	ofstream obj;
//	obj.open("C:\\Users\\J11\\Desktop\\myfile.txt");
//	obj<<"this is first line writing via c++ file handeling";
//	obj.close()	;
	
				// reading the contents of file (will read just one word)
//	ifstream obj;
//	string contents;
//	obj.open("C:\\Users\\J11\\Desktop\\myfile.txt");
//	obj>>contents;
//	cout<<contents;
//	obj.close();
	
				// reading the whole content of file
//		ifstream obj;
//		string contents;
//		obj.open("C:\\Users\\J11\\Desktop\\myfile.txt");
//		while(getline(obj,contents)){
//			cout<<contents;
//		}
//		obj.close();


				// deleting a file
	int return_value=remove("C:\\Users\\J11\\Desktop\\myfile.txt");
	if(return_value==0){
		cout<<"file deleted";
	}
	else{
		cout<<"not deleted!";
	}	
	
}





