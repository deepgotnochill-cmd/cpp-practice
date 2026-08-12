#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    void multiply(vector<vector<int>>& a,
    vector<vector<int>>& b,
vector<vector<int>>& res){
    int m =a.size();
    int n=a[0].size();
    int q = b[0].size();

    res.resize(m, vector<int>(q , 0));

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < n ; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
   }
};


int main(){
    vector<vector<int>> a = {
        {1,2},
        {3,4},
        {5,6}
    };
    vector<vector<int>> b = {
           {1,2,3,4},
           {5,6,7,8}
    };
    vector<vector<int>> res;

    Solution obj;
    obj.multiply(a,b,res);
    for(int i = 0 ; i< res.size(); i++){
        for(int j = 0 ; j< res[i].size(); j++){
            cout<< res[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}
