#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number for which you want to count the digits for : ";
    cin >> n;
    int count = 0;
    if(n==0) count++;
    if(n<0) n=-n;
    while(n>0){
        n/=10;
        count ++;
    }
cout << count;
return 0;
}