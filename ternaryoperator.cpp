#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter a number :";
    // cin>>n;
    // (n%2==0) ? cout <<"even" : cout << "odd";
    int x = 6;
    int y = (x++ > 12) ? x-4 : x*4;
    cout<<y;

    return 0;
} 