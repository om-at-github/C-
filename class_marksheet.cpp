// Create  a C++ marksheet with data members Seat_No, Student_Name ,Class, Subject_Name, Int_Marks ,total, Grand_Total, Precentage ,
// Grade. Write member function to accept Student information for 4 subjects .Calculate Total,
// Grand_Total, Percentage ,Grade and display Marksheet. (Use user defined manipulator)

#include<iostream>
#include<string>
using namespace std;

class marksheet {
	public:
	int seat_No;
	string student_Name;
	int classes;
	string subject_Name;
	int marks;
	int total;
	int Grand_total;
	int precentage;
	string Grade;
	
	public:
	acceptdetails(){
		cout<<"enter the seat_No ";
		cin>>seat_No;
		
		cout<<"enter the student_Name";
		cin>>student_Name;
		
		cout<<"enter the class";
		cin>>classes;
		
		for(int i=0;i<=subject_Name;i++){
		cout<<"enter the subject_Name";
		cin>>subject_Name;
		m[subject_Name] ini(subject_Name);
	}
		
		cout<<"enter the marks";
		cin>>marks;
		
	}
	
	displaydetails(){
		cout<<"enter the seat_No "<<seat_No;
		cout<<"enter the student_Name"<<student_Name;
		cout<<"enter the class"<<classes;
		cout<<"enter the subject_Name"<<subject_Name;
		cout<<"enter the marks"<<marks;
	}
};

int main(){

	
	marksheet m;
	
	m.student_Name;
	
}










//////////////
#include <iostream>
#include <string>

using namespace std;

class Marksheet {
private:
    int Seat_No;
    string Student_Name;
    string Class;
    string Subject_Name[4];
    int Int_Marks[4];
    int Total;
    int Grand_Total;
    float Percentage;
    char Grade;

public:
    void acceptInformation() {
        cout << "Enter Seat No: ";
        cin >> Seat_No;
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, Student_Name);
        cout << "Enter Class: ";
        getline(cin, Class);

        for (int i = 0; i < 4; ++i) {
            cout << "Enter Subject " << i + 1 << " Name: ";
            getline(cin, Subject_Name[i]);
            cout << "Enter Internal Marks for " << Subject_Name[i] << ": ";
            cin >> Int_Marks[i];
            Total += Int_Marks[i];
        }

        Grand_Total = Total;
        for (int i = 0; i < 4; ++i) {
            Grand_Total += Int_Marks[i];
        }

        Percentage = (static_cast<float>(Total) / 400) * 100;

        if (Percentage >= 90)
            Grade = 'A';
        else if (Percentage >= 80)
            Grade = 'B';
        else if (Percentage >= 70)
            Grade = 'C';
        else if (Percentage >= 60)
            Grade = 'D';
        else if (Percentage >= 50)
            Grade = 'E';
        else
            Grade = 'F';
    }

    void displayMarksheet() {
        cout << "\n\n----------------- Marksheet -----------------\n";
        cout << "Seat No: " << Seat_No << endl;
        cout << "Student Name: " << Student_Name << endl;
        cout << "Class: " << Class << endl;

        cout << "\nSubject-wise Marks:\n";
        for (int i = 0; i < 4; ++i) {
            cout << setw(15) << left << Subject_Name[i] << ": " << Int_Marks[i] << endl;
        }

        cout << "\nTotal Marks: " << Total << "/400\n";
        cout << "Grand Total: " << Grand_Total << endl;
        cout << fixed << setprecision(2);
        cout << "Percentage: " << Percentage << "%" << endl;
        cout << "Grade: " << Grade << endl;
    }
};

int main() {
    Marksheet student;

    student.acceptInformation();
    student.displayMarksheet();

    return 0;
}

