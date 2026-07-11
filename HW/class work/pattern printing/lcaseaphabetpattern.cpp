#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the pattern: ";
    int n;
    cin >> n;

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            cout << char('a' + i) << " ";
        }
        cout << endl;
    }

    return 0;
}