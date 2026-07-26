#include <iostream>
using namespace std;
void swap(int& a , int& b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    int a = 5 , b =7;
    //swap(a,b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}