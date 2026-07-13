#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        if (i % 2 != 0) {   // Odd rows -> Numbers
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
        else {              // Even rows -> Alphabets
            for (int j = 0; j < i; j++) {
                cout << char('A' + j) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}