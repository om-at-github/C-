//  Create a C++ class Train with data members as Train No.Train_Name,No_of

// Seats Source Station, Destination Station. Write necessary member functions for the following:

// i. Accept details of n trains

// ii. Display all train details

// iii.Display details of train from specified starting station and ending station by user.

#include <iostream>
#include <string>
using namespace std;

class Train {
private:
    int trainNo;
    string trainName;
    int seats;
    string sourceStation;
    string destinationStation;

public:
    void acceptDetails() {
       
	    cout << "Enter Train No: ";
        cin >> trainNo;
       
        cout << "Enter Train Name: ";
        cin>>trainName;
       
        cout << "Enter Number of Seats: ";
        cin >> seats;
        
        cout << "Enter Source Station: ";
        cin>>sourceStation;
		
        cout << "Enter Destination Station: ";
       cin>>destinationStation;
	
    }

    void displayDetails() {
        cout << "Train No: " << trainNo << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Number of Seats: " << seats << endl;
        cout << "Source Station: " << sourceStation << endl;
        cout << "Destination Station: " << destinationStation << endl;
    }

    void searchDatails(string src, string dest) {
    	
        if (sourceStation == src && destinationStation == dest) {
        	
            cout << "Train No: " << trainNo << endl;
       		cout << "Train Name: " << trainName << endl;
        	cout << "Number of Seats: " << seats << endl;
        	cout << "Source Station: " << sourceStation << endl;
        	cout << "Destination Station: " << destinationStation << endl;
        	
        }
        
    }
};

int main() {
    int n,i;
    cout << "Enter the numbers of trains: ";
    cin >> n;
   
    Train t[n];

    for (int i = 0; i < n; i++) {
        t[i].acceptDetails();
    }

    
    string src, dest;
    cout << "\nEnter sourceStation: ";
    cin>>src;
    cout << "Enter destinationStation: ";
    cin>>dest;
    cout<<"\nTrain details: ";
    
    for (int i = 0; i < n; i++) {
        t[i].searchDatails(src, dest);
    }

    
}

