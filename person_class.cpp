/// create class person which contains data member as Passport_id , Person_name , Nationality ,Gender ,Data_of_Issue ,
// Date_of_expiry . Write a C++ program to perform following member functions:-
// i. Enter details of all persons.
// ii. Display passport details of one person.
// iii. Display passport details of all persons.
// (Use Function overloading and Array of object).

#include<iostream>
#include<string>
using namespace std;

class person {
	public:
	int Passport_id;
	string Person_name;
	string Nationalty;
	string Gender;
	int Data_of_Issue;
	int Data_of_expiry;
	
	acceptDetails(){
		
		cout<<"Enter the Passport_id";
		cin>>Passport_id;
		
		cout<<"enter the Person_name";
		cin>>Person_name;
		
		cout<<"enter the Nationalty";
		cin>>Nationalty;
		
		cout<<"enter the Gender";
		cin>>Gender;
		
		cout<<"enter the Data_of_Issue";
		cin>>Data_of_Issue;
		
		cout<<"enter the Date_of_expiry";
		cin>>Date_of_expiry;
	}
	
	displayDetails(){
		
		cout<<"Enter the Passport_id"<<Passport_id<<"\n";
		
		cout<<"enter the Person_name"<<Person_name<<"\n";
		
		cout<<"enter the Nationalty"<<Nationalty<<"\n";
		
		cout<<"enter the Gender"<<Gender<<"\n";
		
		cout<<"enter the Data_of_Issue"<<Data_of_Issue<<"\n";
		
		cout<<"enter the Date_of_expiry"<<Date_of_expiry<<"\n";
	}
};

int main(){
	int i,n;
	
	person p[n];
	for(i=0;i<n;i++){
		p.displayDetails();
	}
}
