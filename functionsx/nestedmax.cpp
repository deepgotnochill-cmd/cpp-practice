#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a = 10, b = 25, c = 18;

    cout << max(a, max(b, c)) << endl;

    return 0;
}