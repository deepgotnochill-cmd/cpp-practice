#include<iostream>
using namespace std;
int main(){
    int n;
    double sum = 0 , term;
    cout<< "Enter a number : ";
    cin>>n;
    for(int  i = 1 ; i <= n ; i++){
        term = 1;
        for(int j = 1 ; j <= i ; i++)
        term = term * i;
    if(i % 2 == 0)
    sum = sum - (1.0 / term);
else 
    sum = sum + (1.0 / term);
    }
    cout<<"Sum = "<<sum;
    return 0;
}