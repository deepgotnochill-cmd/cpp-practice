#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < n) {
            cout << j << " ";
            j++;
        }
    }

    cout << "\nTime Complexity is O(n)";
}