#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr(8 , - 1); //index 0 to 4
    for(int i = 0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}