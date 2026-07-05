#include <iostream>
using namespace std;

int main() {
    int a, r, n;

    cout << "Enter first term: ";
    cin >> a;

    cout << "Enter common ratio: ";
    cin >> r;

    cout << "Enter number of terms: ";
    cin >> n;

    int term = a;

    for(int i = 1; i <= n; i++) {
        cout << term << " ";
        term = term * r;
    }

    return 0;
}