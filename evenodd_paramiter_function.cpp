//Write a function isEven, which accepts an integer as parameter and returns 1 if the number is
//even, and 0 otherwise. Use this function in main to accept n numbers and ckeck if they are even or odd.//

#include<iostream>
using namespace std;

int iseven(int num)
{
	if(num% 2 == 0){
		return 1;
	}
	return 0;
	
}

int main()
{
	int num;
	cout<<"enter the  numbers";
	cin>>num;
	
	if(iseven(num)){
		cout<<"it is even number";
	}
	else{
		cout<<"odd number";
	}
	
	
}
