#include <iostream>
using namespace std;

int main() {
   cout << "enter the size of the pattern: ";
    int n;
    cin >> n;

    for (char j=0; j<=n ; j++){
for (char i = 0 ; i <=n ; i++){
    cout<<char('A' + i) <<" ";
}
    cout<<endl;
    }
}