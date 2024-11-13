//Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) 
//(Hint: C=5/9(F-32), K = C + 273.15)

#include<iostream>
using namespace std;
int main()
{
	float F;
	
	cout<<"enter the F";
	cin>>F;
	
	float C,K;
	
	C=(float(5)/float(9))*(F-float(32));

	cout<<"C :"<<C<<"\n";
	
	K = C + 273.15;
	cout<<"K :"<<K;
}
