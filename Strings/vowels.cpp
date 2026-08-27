#include<iostream>
#include<string>
int main(){
    string s = "Mohit Kumar Anand";
    int n = s.length();
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        char ch = s[i];
        if(ch>=65 and ch<=90)ch+=32;
        if(ch =="a" or ch =="e" oe ch =="i" or ch=="o" or ch=="u")
    }
cout<<count<<endl;
}