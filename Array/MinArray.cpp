#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {-62, -35, -5, -1, -88, -34};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < mn) {
            mn = arr[i];
        }
    }

    cout << "Minimum element = " << mn << endl;

    return 0;
}