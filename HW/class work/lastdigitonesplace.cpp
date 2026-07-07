#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number : ";
    cin>> n;
    int sum = 0;
    while(n!=0){
        sum = sum + (n%10);
        n = n / 10;
    }
    cout << "sum of digits of a number : "<<sum;
        return 0;
    
}