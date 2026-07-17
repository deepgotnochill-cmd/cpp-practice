#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    for(int i = 0 ;i<n ; i ++){
     //left stars
     for(int j =0 ; j <n - i ; j++)
     cout<<"* ";

     //middle spaces
     if(i !=0) {
        for (int j = 0 ;j <2*i - 1 ; j++)
        cout<<"  ";
     }
     //right stars
     for (int j = 0 ; j < n - i ; j++){
        if (i==0 && j== 01) continue;
        cout<<"* " ;
     }
    cout<<endl;
    }
    return 0;
}