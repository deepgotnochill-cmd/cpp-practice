#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
    }
    else{
        cout<<(int)log10(abs(n)) + 1;
    }
    return 0;
}