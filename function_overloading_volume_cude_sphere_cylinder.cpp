// Write a C++ program to find volume of cylinder,cube and sphere.(useing function overloading).//

#include<iostream>
using namespace std;

float vol(int,int);
float vol(float);
float vol(int);

//int main
int main()
{
	
	int r,h;
	cout<<"enter the radius of cylinders =";
	cin>>r;
	cout<<"enter the height =";
	cin>>h;
	
	int a;
	cout<<"enter the side of cube =";
	cin>>a;
	
	float r1;
	cout<<"enter the radius of sphere =";
	cin>>r1;

	cout<<"Volume of cylinder is : "<<vol(r,h);
	cout<<"\nVolume of cube is :"<<vol(a);
	cout<<"\nVolume of sphere is :"<<vol(r1); 
	return 0;
}

//function 
	//cylinder..
	float vol(int r,int h)
	{
		return(3.14*r*r*h);
	}
		
	//cube..
	float vol(int a)
	{
		return(a*a*a);
	}
	
	//sphere..
	float vol(float r1)
	{
		return((4*3.14*r1*r1*r1)/3);
	}
	
