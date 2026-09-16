#include <iostream>
#include <vector>
using namespace std;

void printRec(vector<int>& arr, int idx) {
    if (idx < 0)
        return;

    cout << arr[idx] << " ";
    printRec(arr, idx - 1);
}

int main() {
    vector<int> arr = {5, 8, 2, 534, 87, 54, -8521};

    printRec(arr, arr.size() - 1);

    return 0;
}