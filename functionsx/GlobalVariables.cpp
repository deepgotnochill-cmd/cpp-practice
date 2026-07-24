#include <iostream>
using namespace std;
int x=7;
void fun(){
  x=23;
}
int main(){
    cout<<x<<endl;
    fun();
    cout<<x<<endl;
}