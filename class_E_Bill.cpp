// Slip 29 - A) Write a C++ program to create a class E_Bill with data members Cust_Name, Meter_ID, No_of_Units and Total_Charges.
// Write member functions to accept and display customer information by calculating charges. 
//(Rules o calculate electricity board charges) . For first 100 units : Rs. 1 per unit . For next 200 units : Rs. 2 per unit .
// Beyond 300 units : Rs. 5 per unit All users are charged a minimum of Rs.150. 
// If the total charge is more than Rs.250.00 then an additional charge of 15% is added.

#include<conio.h>

#include<stdio.h>

#include<iostream>

 class bill

{

int unit,amt;

int mid;

char name[20];

public:

void get();

void charge();

void put();

};

 void bill::get()

{

cout<<"\n enter meter Id : ";

cin>>mid;

cout<<"\n enter name of user : ";

cin>>name;

cout<<"\n  enter units : ";

cin >>unit;

}

 void bill::charge()

{

if(unit<=100)

amt=150+(unit*1);

else

if((unit>100)&&(unit<=300))

amt=150+(unit*2);

else

amt=150+(unit*3);

if(amt<150)

amt=150;

else

if(amt>250)

amt=amt+(amt*15/100);

}

 void bill::put()

{

cout<<"\n MeterId="<<mid;

cout<<"\n name of consumer="<<name;

cout<<"\n units is ="<<unit;

cout<<"\n total charges is ="<<amt;

}

 int main()

{

bill b[10];

int n,i;

clrscr();

cout<<"\n enter how many users =";

cin>>n;

for(i=0;i<n;i++)

b[i].get();

cout<<"\n calculation of bill \n";

for(i=0;i<n;i++)

{

b[i].charge();

b[i].put();

}

getch();

return 0;

}
