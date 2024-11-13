// Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and the
// distance (s) travelled. (Hint: v = u + at, s = u + at2)

#include<iostream>
using namespace std;
int main()

{
	int u,a,t;
	
	cout<<"enter the u:-";
	cin>>u;
	cout<<"enter the a:-";
	cin>>a;
	cout<<"enter the t:-";
	cin>>t;
	
	int v,s;
	
	v = u + a*t;
	cout<<"v :"<<v<<"\n";
	
	s = u + a*t*2;
	cout<<"s :"<<s<<"\n";
}
