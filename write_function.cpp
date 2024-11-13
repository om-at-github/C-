//	Program for write function.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char name[10];
	cout<<"enter name:";
	cin>>name;
	cout<<"entered name is:";
	cout.write(name,10);
	getch();
	return(0);
}

