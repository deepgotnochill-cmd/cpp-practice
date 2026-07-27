#include<iostream>
using namespace std;
int main(){
    int x = 7 , y = 19;
    int* ptr =&x;
    cout<<&x<<endl; //0x61ff0c
    cout<<&y<<endl; // y first byte addressint* ptr =&x;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
}