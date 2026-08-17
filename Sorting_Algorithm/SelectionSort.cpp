#include<iostream>
#include<vector>
using namespace std; 
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    int mn = arr[0],mnIdx = 0;
    for(int i = 0 ; i<n ; i++){
        if (arr[i]<mn){
            mn=arr[i];
            mnIdx = i;
            print(arr);
        }
    }
    swap(arr[0],arr[mnIdx]);
    print(arr);
}