#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {4, 4, 8, 9, 1};

    // Multiply even numbers by 2, square odd numbers
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0)
            v[i] *= 2;
        else
            v[i] *= v[i];
    }

    for (int ele : v)
        cout << ele << " ";
}