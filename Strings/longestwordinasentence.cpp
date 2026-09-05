#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string word,longest;
    stringstream ss(s);
    while(ss >> word){
        if(word.length() > longest.length()){
            longest = word;
        }
    }
    cout<<longest;
    return 0;
}