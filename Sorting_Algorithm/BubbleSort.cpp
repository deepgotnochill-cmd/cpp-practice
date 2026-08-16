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
    int totalSwaps = 0;
    print(arr);
    for(int j = 0 ; j < n-1 ; j++){
        int swaps = 0 ;
        for(int i = 0 ; i < n-1 ; i++){
            if(arr[i] > arr[i+1])
              swap(arr[i],arr[i+1]);
            swaps++;
            totalSwaps++;
        }
        if (swaps == 0) break;
    }
    print(arr);
}