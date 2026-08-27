#include<iostream>
#include<string>
using namespace std;
int main(){
    string d = "Tisha";
    d.pop_back();
    d.push_back("ddc");
    cout<<d<<endl;
    reverse(d.begin()+1,d.end()-1);
    cout<<d<<endl;
}