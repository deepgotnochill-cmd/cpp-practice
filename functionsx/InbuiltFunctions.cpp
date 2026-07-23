#include <iostream>
#include <cmath>
using namespace std;
int min1(int a , int b , int c){
    if(a<=b && a<=c) return a;
    else if(b<=a && b <= c) return c;
    else return c;
}
int main(){
    cout<<min1(51,78,12)<<endl;
    cout<<pow(2,7)<<endl;
    cout<<sqrt(3.14)<<endl;
    cout<<cbrt(1000)<<endl;
    cout<<abs(-5)<<endl;
}