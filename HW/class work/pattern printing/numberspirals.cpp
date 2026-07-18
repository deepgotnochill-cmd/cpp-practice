#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size for the number spiral box : ";
    cin >> n;
    for(int i = 1 ; i<= n ; i ++){
        for(int j = 1 ; j <= n ; j++){
        cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}