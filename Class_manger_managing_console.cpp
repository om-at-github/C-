// create c++ class manager with data members manager_id,manager_name,mobile_no,salary.write necessary member functions for
//the following:
// i: Accept details of n managers.
// ii: Display manager details in ascending order of their salary.
// iii: Display details of a particular manager.(use array of object and use appropriate manipulators.)

#include <iostream>
#include <string>

using namespace std;

class Manager {
public:
    int managerId;
    string managerName;
    string mobileNo;
    double salary;

public:
    
    void acceptDetails() {
    	
        cout << "Enter Manager ID: ";
        cin >> managerId;
        
        cout << "Enter Manager Name: ";
        cin>>managerName;
       
        cout << "Enter Mobile Number: ";
        cin>>mobileNo;
        
        cout << "Enter Salary: ";
        cin >> salary;
    }

    
    void displayDetails()  {
        cout << "ID: " << managerId << "\n";
        cout << "Name: " << managerName << "\n";
        cout << "Mobile: " << mobileNo << "\n";
        cout << "Salary: " << salary << "\n";
    }

   
    bool operator<(const Manager& other) const {
        return salary < other.salary;
    }
};

int main() {
    int n;
    cout << "Enter the number of managers: ";
    cin >> n;

    Manager* managers = new Manager[n];

    
    for (int i = 0; i < n; ++i) {
        managers[i].acceptDetails();
    }

    // Sort managers based on salary in ascending order
    for (int i = 0; i < n - 1; ++i) {
    	
        for (int j = 0; j < n - i - 1; ++j) {
        	
            if (managers[j].operator<(managers[j + 1])) {
                swap(managers[j], managers[j + 1]);
                
            }
        }
    }

    
    cout << "Ascending Order of Salary:\n";
    for (int i = 0; i < n; ++i) {
        managers[i].displayDetails();
        
    }

    
    int managerIdfind;
    cout << "Enter Manager ID: ";
    cin >> managerIdfind;

    for (int i = 0; i < n; ++i) {
        if (managers[i].managerId == managerIdfind) {
            cout << "Details of Manager with ID " << managerIdfind << ":\n";
            managers[i].displayDetails();
            break;
        }
    }

    
}

