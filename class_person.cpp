//Create a C++ class Person with data members Person_name, Mobile_number, Age, City.  Write necessary member 
//functions for the following:
//i.	Search the mobile number of given Person.
//ii.	Search the Person name of given mobile number.
//iii.	Search all person details of given city.
//(Use function overloading)	

#include<iostream>
//#include<string.h>
using namespace std;

class person {
	
	public:
  	string name;
  	int mobileno;
  	int age;
  	string city;

	void ini(string nm,int mno,int ag,string cty)
	{
		name = nm;
		mobileno = mno;
		age = ag;
		city = cty;
	}
	
	int moblienosearch(string person)
	{
		if(name == person)
		{
			return 1;
		}
		else{
		return 0;
		}	
	}	
	
	int personsearch(int mobileno)
	{
		if(mobileno == mobileno)
		{
			return 1;
		}
		else{
			return 0;
		}
	}			
					
	int searchbycity(string cty)
	{
		if(city.compare(cty)==0){
		return 1;
		}else{
			return 0;
		}
	}
									
};

//int main()  ///////
int main(){
	int i,ch,n,age, flag=0;
	string name,city;
	int mobileno;
	
	
	cout<<"How many persons"<<"\n";
	cin>>n;
	
	person p[n];
	
	for(i=0;i<n;i++){
		cout<<"enter name"<<"\n";
		cin>>name;
		cout<<"enter the mobile no"<<"\n";
		cin>>mobileno;
		cout<<"enter the age"<<"\n";
		cin>>age;
		cout<<"enter the city"<<"\n";
		cin>>city;
		p[i].ini(name,mobileno,age,city);

	}
	cout<<"1.search by name"<<"\n";
	cout<<"2.search by mobile no"<<"\n";
	cout<<"3.search by city"<<"\n";
	cin>>ch;
	
	switch(ch){
		
		case 1:cout<<"Enter name=";
			   cin>>name;
			   flag=0;
			   for(i=0;i<n;i++){
			   	int mobileno = p[i].moblienosearch(name);
			   		if(mobileno==1){
			   			cout<<"mobile no="<<p[i].mobileno;
			   			flag = 1;	
			   			break;
					}else{
						continue;
					}   
			   }
			   if(flag == 0){
			   	cout<<"mobile no ,Not found ,enter the wroung name";
			   }
			   break;
			   
		case 2:
				cout<<"enter the mobile no";
				cin>>mobileno;	
				flag=0;
				for(i=0;i<n;i++){
					int res =p[i].personsearch(mobileno);
					cout<<"res ==:"<<res<<"\n";
					cout<<"i ==:"<<i<<"\n";
					
					if(res == 1){
						cout<<"name :"<<p[i].name;
						flag=1;
						break;
					}
					else{
						continue;
					}
				}
				if(flag == 0){
						cout<<"enter the mobile no ,wroung,not found"<<"\n";
				}
				break;


		case 3:cout<<"enter city";
				cin>>city;
				
				for(i=0;i<n;i++){
					int res=p[i].searchbycity(city);
					
					if(res ==1){
						cout<<"name:"<<p[i].name;
						cout<<"age:"<<p[i].age;
						cout<<"city:"<<p[i].city;
						flag=1;
					}
				}
				
				if(flag == 0){
					cout<<"city not found"<<"\n";
				}
				
	}
				  
}
	
	


