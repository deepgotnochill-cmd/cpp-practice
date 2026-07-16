#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Left half (same as previous code)
        for (int j = 1; j <= n; j++) {
            if (i + j > n)
                cout << "* ";
            else
                cout << "  ";
        }

        // Right half
        for (int j = 2; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}