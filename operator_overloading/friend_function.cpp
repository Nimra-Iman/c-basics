//friend_function
#include<iostream>
using namespace std;
class demo{
	private:
		int a,b;
		friend void show(demo);    //chahy public m chahy private 
//		m decalre kr lo y line
	public:
		demo(int x, int y){
			a=x;
			b=y;
		}
//		friend void show(demo);
};
void show(demo r1 ){
	cout<<" a and b are : "<<r1.a <<" "<<r1.b<<" respectively";
}
int main(){
	demo obj(2,3);
	show(obj);
}


