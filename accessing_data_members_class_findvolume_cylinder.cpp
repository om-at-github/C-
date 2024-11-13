//volume of cylinder (3.14*r*r*h) .using accessing data members.//

#include<iostream>
using namespace std;

class cylinder{
	public:
		double radius;
		double height;
		double volume;
};

//int main..
int main()
{
	double r1,h1,r2,h2;
	cylinder c1;
	cout<<"enter the radius and height of the 1st cylinder\n";
	cin>>r1>>h1;
	 
	c1.height = h1;
	c1.radius = r1;
	c1.volume = 3.14*c1.radius*c1.radius*c1.height;
	cout<<"The volume of the first cylinder is ="<<c1.volume<<"\n";
	
	cylinder c2;
	
	cout<<"\nenter the radius and height of the 2nd cylinder\n";
	cin>>r2>>h2;
	
	c2.height = h2;
	c2.radius = r2;
	c2.volume = 3.14*c2.radius*c2.radius*c2.height;
	cout<<"The volume of the second cylinder is ="<<c2.volume;
}
