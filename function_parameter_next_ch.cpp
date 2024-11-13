// Write a function, which accepts a character and integer n as parameter and displays the next
// n characters.

#include<iostream>
using namespace std;

void nextchar(int ch)
{
	int n,i;
	cout<<"how many next n";
	cin>>n;
	cout<<"enter character:";
	cin<<ch;

	for(i=0;i<n;i++)
	 {
  		ch=ch+1;
     	printf("\t%c", ch);
 	 }
		 return 0;
	
}

int main()
{
	int ch;
	cout<<"enter character:";
	cin>>ch;	
}
