#include <iostream>
#include <vector>
using namespace std;

void segregate0and1(vector<int>& arr) {
    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {

        while (arr[i] == 0 && i < j)
            i++;

        while (arr[j] == 1 && i < j)
            j--;

        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    segregate0and1(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}