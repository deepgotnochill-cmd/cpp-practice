#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 70, 90, 100};
    int b[] = {50, 60, 80};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    int c[m + n];

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // Remaining elements of a
    while (i < m)
        c[k++] = a[i++];

    // Remaining elements of b
    while (j < n)
        c[k++] = b[j++];

    for (int i = 0; i < m + n; i++) {
        cout << c[i] << " ";
    }
}