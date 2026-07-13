#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size :";
    cin >> n ;
    for(int i = 0; i<n; i++){
        for(int j = 0 ; j<n; j++){
          if (i % 2 == 0)  cout << char('A' + i) << " ";
          else cout << char('a' + i )<<" ";
        }
        cout<<endl;
    }
    return 0;
}