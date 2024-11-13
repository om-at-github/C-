// Function with primiter // write program swap a two number //

#include<iostream>
using namespace std;

void swap(int a,int b) //formal peramiter//
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"swapped value \n";
	cout<<"a:-"<<a;
	cout<<"b:-"<<b;
}

int main()
{
	int a,b;
	
	cout<<"enter the two numbers \n";
	cin>>a>>b;
	swap(a,b); //actual peramiter//
}
