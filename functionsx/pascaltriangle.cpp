#include <iostream>
using namespace std;

int fact(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void pascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {

        // Spaces
        for (int j = 0; j < rows - i - 1; j++)
            cout << " ";

        // Print values
        for (int j = 0; j <= i; j++)
            cout << nCr(i, j) << " ";

        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    pascalTriangle(rows);

    return 0;
}