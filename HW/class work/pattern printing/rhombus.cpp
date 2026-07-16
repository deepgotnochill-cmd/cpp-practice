#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print stars
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}