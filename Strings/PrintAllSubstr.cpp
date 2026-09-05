#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i = 0; i < s.length();i++){
        for(int j = i; j < s.length(); j++){
            cout<<s.substr(i,j-1+1)<<endl;
        }
    }
    return 0;
}