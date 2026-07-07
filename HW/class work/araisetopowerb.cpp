#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter power: ";
    cin >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++) {
        ans = ans * a;
    }

if ( a == 0 && b ==0) cout <<"indeterminate form";
else cout << "answer = "<< ans;
}