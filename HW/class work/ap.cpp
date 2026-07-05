#include <iostream>
using namespace std;

int main() {
    int a, d, n;

    cout << "Enter first term: ";
    cin >> a;

    cout << "Enter common difference: ";
    cin >> d;

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << a + i * d << " ";
    }

    return 0;
}