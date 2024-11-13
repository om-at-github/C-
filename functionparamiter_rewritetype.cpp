// Function with paramiter // function with rewrite  type.// sum two numbers //

#include<iostream>
using namespace std;

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	int a,b,sum;
	cout<<"enter 2 numbers \n";
	cin>>a>>b;
	sum=add(a,b);
	cout<<"sum of two numbers is"<<sum;
}

