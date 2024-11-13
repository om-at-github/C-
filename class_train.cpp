// 1. Create a C++ class Train with data members as Train No.Train_Name,No_of

//Seats Source Station, Destination Station. Write necessary member functions for the following:

//i. Accept details of n trains

//ii. Display all train details

// iii.Display details of train from specified starting station and ending station by user.

#include<iostream>
using namespace std;

class train {
	
public:
		
    int trainNo;
    string trainName;
    int seats;
    string sourceStation;
    string Destination_Station;

public:

    void acceptDetails() 
	{
		
        cout<<"Enter Train Number: ";
        cin >>trainNo;
    
        cout << "Enter Train Name: ";
        cin>>trainName;
        
        cout << "Enter Number of Seats: ";
        cin >>seats;
         
        cout << "Enter Source Station: ";
        cin>>sourceStation;
        
        cout << "Enter Destination Station: ";
        cin>>Destination_Station;
    }

    void displayDetails()  {
    	
       cout << "Train Number: " <<trainNo;
       cout << "Train Name: " <<trainName;
       cout << "Number of Seats: " <<seats;
       cout <<"Source Station:"<<sourceStation;
       cout<<"Destination Station:"<<Destination_Station;
       
    }
    
    void SearchTrainDetails(string src, string dest){
       	
       if(sourceStation==src && Destination_Station==dest){
       		src=trainNo;
       		dest=trainNo;
       	
       		cout << "Train Number: " <<trainNo;
       cout << "Train Name: " <<trainName;
       cout << "Number of Seats: " <<seats;
       cout <<"Source Station:"<<sourceStation;
       cout<<"Destination Station:"<<Destination_Station;
	   }
	   else{
	   		cout<<"-";
	   }
	}
	
//	void searchTrain(int searchNo) {
        
           // if (trainNo == searchNo) {
             //   cout << "Train No: " << trainNo << "\n";
               // cout << "Train Name: " << trainName << "\n";
                //cout << "Seats: " << seats << "\n";
                //cout << "Source Station: " << sourceStation << "\n";
              //  cout << "Destination Station: " <<Destination_Station << "\n";
               
                
            //}
        
        //if (trainNo =! searchNo) {
      //      cout<<"No train exited"<<"\n";
        //}
    //}
};

int main() {
	int i,n,ch,flag=0;
	int trainNo;
    string trainName;
    int seats;
    string sourceStation;
    string Destination_Station;
	
	
	cout<<"enter the number of trains: ";
	cin>>n;
	
	train t[n];
	
	for(i=0;i<n;i++){
		cout<<"enter trainNO"<<"\n";
		cin>>trainNo;
		cout<<"enter the trainName"<<"\n";
		cin>>trainName;
		cout<<"enter the seats"<<"\n";
		cin>>seats;
		cout<<"enter the sourceStation "<<"\n";
		cin>>sourceStation;
		cout<<"enter the Destination_Station";
		cin>>Destination_Station;
		t[n].(trainNo,trainName,seats,sourceStation,Destination_Station);
	}
	
	cout<<"enter the trainNo\n";
	cout<<"enter the trainName";
	cout<<"enter the seats";
	cout<<"enter the sourceStation";
	cout<<"enter the Destination_Station";
	
	switch(ch){
		
		case 1:cout<<"enter the sourceStation";
			   cin>>sourceStation;
			   for(i=0;i<n;i++){
			   	int trainNO = t[i].SearchTrainDetails(trainNo);
			   		if(trainNo==1){
			   			cout<<"train No="<<p[i].trainNo;
			   				
			   			break;
					}else{
						continue;
					}   
			   }
			   
			   
	}
	
	
	
	
	
   // int searchNo;
    //cout << "Enter the number of trains: ";
   // cin >> searchNo;
    
    //train t;
    //t.acceptDetails();
   // t.displayDetails();
  //  t.trainNo;

    //cout << "\nEnter the Train Number to search: ";
   // cin >> searchNo;

    //t.searchTrain(searchNo);
}
