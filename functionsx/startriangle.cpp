#include <iostream>
using namespace std;
void starTriangle(int n){
    int n;
    cout<<"enter the size of star triangle you want for n : ";
    cin>>n;
    for (int i=1; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl; 
    }
}
int main(){
    int a;
    cout<<"enter the size of star triangle you want for a : ";
    cin>>a;
   starTriangle(a);
      int b;
    cout<<"enter the size of star triangle you want for b : ";
    cin>>b;
    starTriangle(b);
      int c;
    cout<<"enter the size of star triangle you want for c : ";
    cin>>c;
    starTriangle(c);
}