//  Abstract classes.

#include<iostream>
using namespace std;

class Shape{
		public:
			float l;
			void getData()
			{
				cin>>l;
			}
			//virtual function  
			virtual float calculatearea()=0;
};

class Square :public Shape
{
	public:
		float calculatearea()
		{
			return l*l;
		}
};

class Circle :public Shape{
	public:
	float calculatearea()
	{
		return 3.14*l*l;
	}
};

int main(){
	Square s1;
	Circle c;
	
	cout<<"enter length to calculate the area of a square:";
	s1.getData();
	cout<<"area of square:"<<s1.calculatearea();
	
	cout<<"enter radius to calculate the area of a circle:";
	c.getData();
	cout<<"area of circle:"<<c.calculatearea();
	
}
