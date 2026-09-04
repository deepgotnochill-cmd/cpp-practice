#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ="Tisha";
    string sub = s.substr(0,3);
    cout<<sub<<endl;
    cout<<s.substr(0,5)<<endl;
    cout<<s.substr(1,2)<<endl;
    cout<<s.substr(2,3)<<endl;
}