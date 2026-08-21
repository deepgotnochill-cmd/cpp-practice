#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& arr, int target){
    int low = 0;
    int high = arr.size()-1;
    while(low<= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]> target){
            low = mid + 1;
        }
        else{
            high = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {179, 124,120,99,87,79,44,22,19,-4};
    int target = 44;
    int result = binarysearch(arr, target);
    if(result != -1)
    cout<< "Element found at index :"<<result<<endl;
else
cout<<"Element not found"<<endl;
return 0;
}