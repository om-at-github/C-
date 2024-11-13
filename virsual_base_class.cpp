//// Virtual base class

#include<iostream>
using namespace std;

class base{
	public:
		int x;
};

class derived1:virtual public base
{
	public:
		int y;
};

class derived2:virtual public base
{
	public:
		int z;
};

///* derived inherits derived and derived z. However,only one copy of base is present //

class derived3:public derived1,public derived2
{
	public:
		int mult(){
			return x*y*z;
	}
};

int  main(){
	derived3 d;
	d.x=10;
	d.y=20;
	d.z=30;
	
	cout<<"product is"<<d.mult();
}
