#include<iostream>
using namespace std;
int ways(int n){
    if(n==1)
    return 1;
if(n==2)
return 2;
return ways(n-1)+ways(n-2);
}
int main(){
    int n;
    cin>>N;
    cout<<ways(n);
    return 0
}