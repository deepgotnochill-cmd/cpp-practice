#include <iostream>
using namespace std;
void fun(int x , float y){
    cout<<"DEEP"<<endl;
}
void fun(char y , int x){
    cout<<"TISHA"<<endl;
}
int main(){
    fun(17,3.17);
    fun('A',10);
}