 #include <iostream>
#include <string>
using namespace std;

class Student {   // User Defined Data Type
public:
    string name;
    float marks;
    int roll;

    // Constructor
    Student(string n, float m, int r) {
        name = n;
        marks = m;
        roll = r;
    }

    // Print function
    void print() {
        cout << "Name  : " << name << endl;
        cout << "Marks : " << marks << endl;
        cout << "Roll  : " << roll << endl;
    }
};

// Function that takes object by reference
void change(Student& s) {
    s.name = "Akash";
}

int main() {
    Student x("Sumit", 8.7, 39);   // Create object
    change(x);                     // Pass by reference → name will change
    x.print();                     // Print updated details

    return 0;
}