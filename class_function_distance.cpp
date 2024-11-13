// Write a C++ program to create a class Distance with data members feet and inches .Write member function for the following:
// a.To accept distance.
// b.To display distance.
// c.To add two distance objects.
// (Use object as a function argument and function returning object).

#include<iostream>
using namespace std;

//class
class Distance{
	
	public:
		float feet ,inches;
		
	void accept(){
		cout<<"Enter the feet :"<<"\n";
		cin>>feet;
		
		cout<<"\nEnter the inches :"<<"\n";
		cin>>inches;
		
	}
		void print(){
		cout<<"feet :"<<feet;
		
		cout<<"\n inches :"<<inches;
	
		
	}
	
	Distance sum(Distance d1){
		Distance d3;
		d3.feet=feet+d1.feet;
		d3.inches=inches+d1.inches;
		return d3;
		
	}

	
			
};

// int main()
int main(){
	
	Distance d1,d2,d3;
	d1.accept();
	d2.accept();
	
	d3=d1.sum(d2);
	cout<<"Total feet="<<d3.feet;
	cout<<"total inches"<<d3.inches;
	
}
