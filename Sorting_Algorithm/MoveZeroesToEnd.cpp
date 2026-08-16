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
    vector<int> arr = {5,4,3,6,2,1,2,3,0,9,0,4,0,5,0,1,2,3,45,0,4,3};
    int n = arr.size();
    print(arr);
    for(int j = 0 ; j < n-1 ; j++){
        for(int i = 0 ; i < n-1-j ; i++){
            if(arr[i] == 0){
            swap(arr[i],arr[i+1]);
            }
        }
    }
    print(arr);
}