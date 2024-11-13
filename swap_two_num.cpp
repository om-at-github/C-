//write program swap a two number // 

#include<iostream>
using namespace std;

void reversevalue(){
	int a;
	int b;
	int temp;
	
	cout<<"number before interchange"<<"\n";
	cout<<"enter the a - ";
	cin>>a;
	cout<<"enter the b - ";
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"number after interchange"<<"\n";
	cout<<"value of a - "<<a;
	cout<<"value of b - "<<b;
	
}

int main()
{
	cout<<"this program is reverse the values via function";
	reversevalue();
	
}
