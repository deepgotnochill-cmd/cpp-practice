#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if (n1 == 0 || n2 == 0) {
        cout << "Product is Zero" << endl;
    } else if ((n1 > 0 && n2 > 0) || (n1 < 0 && n2 < 0)) {
        cout << "Product is Positive" << endl;
    } else {
        cout << "Product is Negative" << endl;
    }

    return 0;
}