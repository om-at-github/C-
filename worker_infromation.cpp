// Write a C++ program to accept Worker information Worker_Name, No_of_Hours_worked, Pay_ Rate and Salary.
// Write necessary functions to calculate and display the salary of Worker. (Use default value for Pay_Rate)		

#include<iostream>
using namespace std;

class worker
{
  	char	name[50]; 
        int nohour; 
        void display()
       {
            cout<<"Name "<<name<<"\n"<<"No of hours work "<<nohour;
       }
      public:
      void calculate(int payrate=10)
      {

           nohour=nohour*payrate;
           display(); 
      }
      void accept()
      {
         
         cout<<"Enter employee name:-> ";
         cin>>name;
         cout<<"Enter how many hours worked:-> ";
         cin>>nohour;
         calculate();
      }
};
int main()
{
   worker w1;
   w1.accept();
   
}
