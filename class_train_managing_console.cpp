// Create the train class with data members as Train_no,Train_name,num_of_seat,source_station,destination_station.write necessary
//member functions for the follwing:
// i:Accept details of n trains.
// ii:display all trian details.;
// iii: Dispaly details of train from specified starting station and ending station by user.

#include<iostream>
using namespace std;

class train {
	public:
	int train_no;
	char train_name;
	int num_of_seat;
	char source_station;
	char destination_station;
	
	
	getset(){
		
			cout<<"train no"<<train_no;
			
			cout<<"train_name"<<train_name;
		
			cout<<"number of seat "<<num_of_seat;
			
			cout<<"source_station"<<source_station;
				
			cout<<"destination_station"<<destination_station;
	}
	
	
void display(){
	
	cin>>train_no;
	cin>>train_name;
	cin>>num_of_seat;
	cin>>source_station;
	cin>>destination_station;
};
};


int main(){
	train t;
	t.train_no;
	t.train_name;
	t.num_of_seat;
	t.source_station;
	t.destination_station;
	t.display();
	
}
	
	
	

