//adding numbers using overloading//

#include<iostream>
using namespace std;

void add(int a, int b)
{
cout<< (a + b);
}

void add(double c, double d)
{
	cout << (c + d);
}

int main()
{
	
	add(10, 2);
	add(5.4,1.5);
	
	return 0;
}


