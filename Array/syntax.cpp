#include <iostream>
#include <iterator>
using namespace std;

int main() {
    int marks[] = {74, 96, 91, 57, 62, 35, 89, 90, 11, 23, 45, 67, 79};

    cout << sizeof(marks) / sizeof(marks[0]) << endl;   // Prints number of elements (13)

    cout << marks[2] << endl;      // Prints 91

    marks[2] = 17;                 // Changes third element to 17

    cin >> marks[2];               // Takes user input and stores it in marks[2]

    cout << marks[4] << endl;      // Prints 62

    return 0;
}