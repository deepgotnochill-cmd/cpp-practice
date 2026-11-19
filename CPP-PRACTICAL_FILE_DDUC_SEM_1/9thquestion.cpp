#include <iostream>
using namespace std;
int main(){
    float p , r , t , si , amount;
    cout<<"Enter Principal :";
    cin >> p;
    cout<<"Enter Rate : ";
    cin >> r;
    cout<<"Enter time : ";
    cin >> t;
    si = ( p * r * t) / 100;
    amount = p + si;
    cout<<"Simple Interest = " << si << endl;
    cout<<"Total Amount = "<<amount;
    return 0; 
}