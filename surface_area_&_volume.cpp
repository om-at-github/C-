//Accept dimensions of a cylinder and print the surface  area andd volume (Hint :
//surface area = 2*3.14*r*r + 2*3.14*r*h  , volume=3.14*r*r*h)

#include<iostream>
using namespace std;
int main()
{
	int r;
	int h;
	int surface_area,volume;
	
	cout<<"enter the r";
	cin>>r;
	cout<<"enter the h";
	cin>>h;
	
	surface_area=2*3.14*r*r + 2*3.14*r*h;
	cout<<"surface area value :"<<surface_area<<"\n";
	
	volume=3.14*r*r*h;
	cout<<"volume value :"<<volume;
	
}

