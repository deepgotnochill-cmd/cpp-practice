#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the right-aligned number triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}