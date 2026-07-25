#include<iostream>
using namespace std;
int max(int a , int b){
    if(a>b) return a;
    else return b;
}
void fun(int age=18){
    cout<<"My age is "<<age<<endl;
}int main(){
    fun();
}