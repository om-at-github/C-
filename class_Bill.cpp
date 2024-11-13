// Practical Slip 29 - 2019 Pattern
// C++:
  //A) Write a C++ program to create a class E_Bill with data members Cust_Name, Meter_ID, No_of_Units and Total_Charges.
   //Write member functions to accept and display customer information by calculating charges.
   // (Rules o calculate electricity board charges)

//. For first 100 units  : Rs. 1 per unit
//. For next 200 units : Rs. 2 per unit
//. Beyond 300 units  : Rs. 5 per unit

//All users are charged a minimum of Rs.150. If the total charge is more than Rs.250.00 then an additional charge of 15% is added.

#include <iostream>
#include <string>
using namespace std;

class E_Bill {
private:
    string Cust_Name;
    int Meter_ID;
    int No_of_Units;
    float Total_Charges;

public:
    void accept() {
        cout << "Enter Customer Name: ";
        getline(cin, Cust_Name);
        cout << "Enter Meter ID: ";
        cin >> Meter_ID;
        cout << "Enter Number of Units Consumed: ";
        cin >> No_of_Units;
    }

    void calculateCharges() {
        if (No_of_Units <= 100)
            Total_Charges = max(150.0f, static_cast<float>(No_of_Units));
        else if (No_of_Units <= 300)
            Total_Charges = max(150.0f, 100.0f + 2.0f * (No_of_Units - 100));
        else
            Total_Charges = max(150.0f, 500.0f + 5.0f * (No_of_Units - 300));

        if (Total_Charges > 250)
            Total_Charges += Total_Charges * 0.15;
    }

    void display() {
        cout << "\n\n";
        cout << "------------------------------------------\n";
        cout << "Customer Name: " << Cust_Name << endl;
        cout << "Meter ID: " << Meter_ID << endl;
        cout << "Number of Units Consumed: " << No_of_Units << endl;
        cout << "Total Charges: Rs. " << Total_Charges << endl;
        cout << "------------------------------------------\n";
    }
};

int main() {
    E_Bill customer;
    customer.accept();
    customer.calculateCharges();
    customer.display();
    return 0;
}

