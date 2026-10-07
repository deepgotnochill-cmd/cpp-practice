#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& arr) {
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}

void merge(const vector<int>& a, const vector<int>& b, vector<int>& c) {
    int i = 0, j = 0, k = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < a.size()) c[k++] = a[i++];
    while (j < b.size()) c[k++] = b[j++];
}
void mergeSort(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    vector<int> a(arr.begin(), arr.begin() + n / 2);
    vector<int> b(arr.begin() + n / 2, arr.end());

    mergeSort(a);
    mergeSort(b);
    merge(a, b, arr);
}

int main() {
    vector<int> arr = {5, 2, 8, 3, 7, 1, 4, 6};

    print(arr);
    mergeSort(arr);
    print(arr);
}