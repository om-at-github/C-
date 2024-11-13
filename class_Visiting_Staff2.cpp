//Slip 29 - B) Create a C++ class Visiting Staff with data members Name, No_of_Subjects, Name_of_Subjects[],Workinghours, 
//TotalSalary. (Number of subjects varies for a Staff).
//Write a parameterized constructor to initialize the data members and create an array for Name_of_Subjects dynamically.
// Display Visiting Staff details by calculating salary. (Assume remuneration Rs. 300 per working hour)


#include <iostream>
#include <string>
using namespace std;

class Visiting_Staff {
private:
    string Name;
    int No_of_Subjects;
    string *Name_of_Subjects;
    int Working_Hours;
    float Total_Salary;

public:
    Visiting_Staff(string name, int subjects, int hours) {
        Name = name;
        No_of_Subjects = subjects;
        Working_Hours = hours;
        Total_Salary = 0; // Initialize total salary to zero

        // Dynamically allocate memory for Name_of_Subjects array
        Name_of_Subjects = new string[No_of_Subjects];

        cout << "Enter names of " << No_of_Subjects << " subjects:\n";
        for (int i = 0; i < No_of_Subjects; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> Name_of_Subjects[i];
        }
    }

    // Destructor to deallocate memory for dynamically allocated array
    ~Visiting_Staff() {
        delete[] Name_of_Subjects;
    }

    void calculateSalary() {
        Total_Salary = Working_Hours * 300; // Rs. 300 per working hour
    }

    void display() {
        cout << "\n\n";
        cout << "------------------------------------------\n";
        cout << "Name: " << Name << endl;
        cout << "Number of Subjects: " << No_of_Subjects << endl;
        cout << "Subjects: ";
        for (int i = 0; i < No_of_Subjects; ++i) {
            cout << Name_of_Subjects[i];
            if (i != No_of_Subjects - 1)
                cout << ", ";
        }
        cout << endl;
        cout << "Working Hours: " << Working_Hours << endl;
        cout << "Total Salary: Rs. " << Total_Salary << endl;
        cout << "------------------------------------------\n";
    }
};

int main() {
    string name;
    int subjects, hours;

    cout << "Enter Name of Visiting Staff: ";
    cin >> name;
    cout << "Enter Number of Subjects: ";
    cin >> subjects;
    cout << "Enter Working Hours: ";
    cin >> hours;

    Visiting_Staff staff(name, subjects, hours);
    staff.calculateSalary();
    staff.display();

    return 0;
}

