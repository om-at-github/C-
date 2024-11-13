// Accept inner and outer radius of a ring and print the perimeter and area of the ring (Hint:
// perimeter = 2 p (a+b) , area = p (a2-b2) )

#include<iostream>
using namespace std;
int main()

{
	int p,a,b;
	
	cout<<"enter the p";
	cin>>p;
	
	cout<<"enter the a";
	cin>>a;
	
	cout<<"enter the b";
	cin>>b;
	
	int area,perimeter;
	
	perimeter = 2*p*(a+b);
	cout<<"perimeter :"<<perimeter<<"\n";
	
	area = p*(a*2-b*2);
	cout<<"area :"<<area<<"\n";
}
