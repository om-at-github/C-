// Accessing data members, find and print the Volume of Box1 and Box2.//

#include<iostream>
using namespace std;

class box{
	public:
		double length;
		double breath;
		double height;
};

int main(){
	
	//object declaration//
	box b1;
	box b2;
	double volume = 0.0;
	
	//box1//
	b1.length=12;
	b1.breath=22;
	b1.height=3.44;
	
	//box2//
	b2.length=33;
	b2.breath=4;
	b2.height=9.9;
	
	//volume of box1//
	volume = b1.length*b1.breath*b1.height;
	cout<<"volume of box1 is:\n"<<volume;
	
	//volume of box2//
	volume = b2.length*b2.breath*b2.height;
	cout<<"\n volume of box2 is:\n"<<volume;
	
}
