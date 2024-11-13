/// Create Matrix two dimensional in integer array.write member function to display sum of all elements of entered matrix.
// (Use Constructor use to memory allocation and Destructor use to free)

# include<iostream>
using namespace std;

class mymatrix{
	
	public:
		int num[10][10];
		int n,i,j;
		
		mymatrix(){
			cout<<"How many rows and columns:";
			cin>>n;
		
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					cin>>num[i][j];
				}
				
			}
		}
		
		void sum(){
			
			int sum = 0;
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					sum = sum + num[i][j];
				}	
				
			}
			cout<<"sum"<<sum;
			
		}
			
	
};


int main(){
	 mymatrix m;
	 m.sum();
}
