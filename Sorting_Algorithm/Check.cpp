#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>& arr){
    for(int i = 0 ; i< arr.size()-1 ; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr = {1,2,3,4,6,5,7,8,9,10};
    if (isSorted(arr))
    cout<< "Array is sorted";
else
    cout<<"Array is not sorted";
return 0;
}