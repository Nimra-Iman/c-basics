//Create two base classes Shape and Color. Shape should have a method 
//draw() and Color should have a method fill(). Derive a class ColoredShape
// from both Shape and Color. Override the draw() method in ColoredShape to
//  print "Drawing a colored shape". Demonstrate the use of these 
//  classes in the main() function.
#include<iostream>
using namespace std;
class shape{
	public:
		void draw(){
			cout<<"this is draw in shape";
		}
};
class color{
	public:
		void fill(){
			cout<<"this is fill in color";
		}
};
class ColoredShape: public color, public shape{
	public:
		void draw(){
			cout<<"this is colored shape";
		}
};
int main(){
	color c;
	shape s;
	ColoredShape sp;
	sp.draw();
	s.draw();
}






