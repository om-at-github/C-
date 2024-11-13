// Slip 30 - A) Write C++ program to create two classes Integer_Array and Float_Array with an array as a data member. 
//  Write necessary member functions to accept and display array elements of both the classes. 
// Find and display average of both the array. (Use Friend function)



#include <iostream>
using namespace std;

class Float_Array; // Forward declaration

class Integer_Array {
private:
    int size;
    int *arr;
public:
    Integer_Array(int s) {
        size = s;
        arr = new int[size];
    }
    void accept() {
        cout << "Enter " << size << " integer elements:\n";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }
    void display() {
        cout << "Integer array elements:\n";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    friend float findAverage(const Integer_Array &ia, const Float_Array &fa);
};

class Float_Array {
private:
    int size;
    float *arr;
public:
    Float_Array(int s) {
        size = s;
        arr = new float[size];
    }
    void accept() {
        cout << "Enter " << size << " float elements:\n";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }
    void display() {
        cout << "Float array elements:\n";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    friend float findAverage(const Integer_Array &ia, const Float_Array &fa);
};

float findAverage(const Integer_Array &ia, const Float_Array &fa) {
    float intSum = 0, floatSum = 0;
    for (int i = 0; i < ia.size; ++i) {
        intSum += ia.arr[i];
    }
    for (int i = 0; i < fa.size; ++i) {
        floatSum += fa.arr[i];
    }
    float intAvg = intSum / ia.size;
    float floatAvg = floatSum / fa.size;
    cout << "Average of integer array: " << intAvg << endl;
    cout << "Average of float array: " << floatAvg << endl;
    return intAvg + floatAvg;
}

int main() {
    int intSize, floatSize;
    cout << "Enter size of integer array: ";
    cin >> intSize;
    cout << "Enter size of float array: ";
    cin >> floatSize;
    
    Integer_Array intArr(intSize);
    Float_Array floatArr(floatSize);
    
    intArr.accept();
    floatArr.accept();
    
    intArr.display();
    floatArr.display();
    
    findAverage(intArr, floatArr);
    
    return 0;
}

