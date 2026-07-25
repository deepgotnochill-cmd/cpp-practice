#include <iostream>
using namespace std;
void fun(){
    cout<<"hi lol"<<endl;
}
void fun(int x){
    cout<<"good morning bro"<<endl;
}
void fun(int x , int y){
    cout<<"kemcho deep"<<endl;
}
int main(){
    fun();
    fun(17);
    fun(10,17);

}