#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number to get its factorial : ";
    cin>>n;
    long long fact = 1;
    for ( int i = 1; i <=n ; i ++ ){
        fact *=i;
    }
    cout<<fact;
}