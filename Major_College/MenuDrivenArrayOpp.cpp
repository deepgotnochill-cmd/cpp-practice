#include <iostream>
using namespace std;

int main() {
    int a[50], n, choice, x, sum, min, max;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in ascending order:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    do {
        cout << "\n1. Binary Search\n2. Maximum\n3. Minimum\n4. Sum\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter number to search: ";
            cin >> x;
            int low = 0, high = n - 1, found = -1;

            while (low <= high) {
                int mid = (low + high) / 2;
                if (a[mid] == x) {
                    found = mid;
                    break;
                } else if (a[mid] < x)
                    low = mid + 1;
                else
                    high = mid - 1;
            }

            if (found == -1)
                cout << "Not found\n";
            else
                cout << "Found at position " << found + 1 << '\n';
        }
        else if (choice >= 2 && choice <= 4) {
            min = max = a[0];
            sum = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] < min) min = a[i];
                if (a[i] > max) max = a[i];
                sum += a[i];
            }

            if (choice == 2) cout << "Maximum: " << max << '\n';
            if (choice == 3) cout << "Minimum: " << min << '\n';
            if (choice == 4) cout << "Sum: " << sum << '\n';
        }
    } while (choice != 5);

    return 0;
}
