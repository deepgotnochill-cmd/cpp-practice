#include <iostream>
using namespace std;
int main (){
    float x;
    cout<<"enter a real number : ";
    cin>>x;
    int y = (int)x;
    if(x==y)cout<<"integer";
    else cout << "not an integer";
    return 0;
}