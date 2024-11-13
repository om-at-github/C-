// Write a C++ program to create two classes Array1 and Array2 with an integer array as a data member.Write neccessary member
// functions to accept and display array elements of both the classes.
// Find and display maximum of both the array.(use Friend function)

#include<iostream>
using namespace std;

//class
class Array1{
	public:
	int num1[5];
	
	void accept(){
		cout<<"Enter the number:";
		cin>>num1[5];
	}
	
	void display(){
		cout<<"number1"<<num1[5];
	}
	
};


// main
int main(){
	
}
