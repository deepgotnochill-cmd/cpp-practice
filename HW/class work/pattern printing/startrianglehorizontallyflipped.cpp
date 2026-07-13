#include <iostream>
using namespace std;
int main(){
//     int n; method 1
//     cout<<"Enter the size of the horizontally flipped star triangle you want : ";
//     cin>>n ;
//     for(int i = 1 ; i<=n ; i++){
//         for (int j = 1 ; j <= n - i + 1 ; j++ ){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }

//   int n; method 2
//     cout<<"Enter the size of the horizontally flipped star triangle you want : ";
//     cin>>n ;
//     for(int i = n ; i>=1 ; i--){
//         for (int j = 1 ; j <= i ; j++ ){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }


  int n;
  int a = n;
    cout<<"Enter the size of the horizontally flipped star triangle you want : ";
    cin>>n ;
    for(int i = n ; i<=n ; i--){
        for (int j = 1 ; j <= a ; j++ ){
            cout<<"*"<<" ";
        }
        a--;
        cout<<endl;
    }
return 0;
}