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

        // Print the same alphabet
        for (int j = 1; j <= i; j++) {
            cout << char('A' + i - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}