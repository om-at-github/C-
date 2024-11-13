//Slip 30 - B) Create a C++ class Marksheet with data members Seat_No, Student_Name, Class, Subject_Name[], Int_Marks[], Ext_Marks[], 
// Total[], Grand_Total, Percentage, Grade. Write member function to accept Student information for 5 subjects.
// Calculate Total, Grand_Total, Percentage, Grade and use setwQ), setprecision(and setfillQto display Marksheet.


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Marksheet {
private:
    int Seat_No;
    string Student_Name;
    string Class;
    string Subject_Name[5];
    int Int_Marks[5];
    int Ext_Marks[5];
    int Total[5];
    int Grand_Total;
    double Percentage;
    char Grade;

public:
    void accept() {
        cout << "Enter Seat No: ";
        cin >> Seat_No;
        cin.ignore(); // Ignore newline character in input buffer
        cout << "Enter Student Name: ";
        getline(cin, Student_Name);
        cout << "Enter Class: ";
        getline(cin, Class);

        for (int i = 0; i < 5; ++i) {
            cout << "Enter Subject " << i + 1 << " Name: ";
            getline(cin, Subject_Name[i]);
            cout << "Enter Internal Marks for " << Subject_Name[i] << ": ";
            cin >> Int_Marks[i];
            cout << "Enter External Marks for " << Subject_Name[i] << ": ";
            cin >> Ext_Marks[i];
            Total[i] = Int_Marks[i] + Ext_Marks[i];
        }
        calculate();
    }

    void calculate() {
        Grand_Total = 0;
        for (int i = 0; i < 5; ++i) {
            Grand_Total += Total[i];
        }
        Percentage = static_cast<double>(Grand_Total) / 5;
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

    void display() {
        cout << "\n\n";
        cout << "------------------------------------------\n";
        cout << setw(20) << setfill(' ') << "Seat No: " << Seat_No << endl;
        cout << setw(20) << setfill(' ') << "Student Name: " << Student_Name << endl;
        cout << setw(20) << setfill(' ') << "Class: " << Class << endl;
        cout << "------------------------------------------\n";
        cout << setw(15) << setfill(' ') << "Subject" << setw(15) << "Internal" << setw(15) << "External" << setw(15) << "Total" << endl;
        cout << "------------------------------------------\n";
        for (int i = 0; i < 5; ++i) {
            cout << setw(15) << setfill(' ') << Subject_Name[i] << setw(15) << Int_Marks[i] << setw(15) << Ext_Marks[i] << setw(15) << Total[i] << endl;
        }
        cout << "------------------------------------------\n";
        cout << setw(45) << setfill(' ') << "Grand Total: " << Grand_Total << endl;
        cout << setw(45) << setfill(' ') << "Percentage: " << fixed << setprecision(2) << Percentage << "%" << endl;
        cout << setw(45) << setfill(' ') << "Grade: " << Grade << endl;
        cout << "------------------------------------------\n";
    }
};

int main() {
    Marksheet student;
    student.accept();
    student.display();
    return 0;
}

