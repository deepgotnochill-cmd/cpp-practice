#include<iostream>
#include<cmath>
using namespace std;
int main(){
        int n;
    cout<<"Enter a number please : ";
    cin>>n;
    int factors = 0;
    for(int i = 1; i <=sqrt(n) ; i ++){
        if(n%i == 0){ // factors mil gaya
            factors++;
    }
}
  if(factors ==1) cout<<"neither prime nor composite ";
  else if( factors >= 3) cout<<"composite number";
  else cout<<"prime number";
}