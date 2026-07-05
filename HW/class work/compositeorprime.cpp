#include<iostream>
#include<cmath>
using namespace std;
int main(){
        int n;
    cout<<"Enter a number please : ";
    cin>>n;
    if(n<=1){
        cout << "neither prime or composite number";
        return 0;
    }
    bool flag = false ; // false means prime
    for(int i = 2; i <= sqrt(n) ; i ++){
        if(n%i == 0){ // factors mil gaya
            flag = true;
            break;
    }
}
  if(flag == true ) cout << "composite number ";
  else cout << "prime number";
}