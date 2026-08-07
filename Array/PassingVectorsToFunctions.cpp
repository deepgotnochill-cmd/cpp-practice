#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
void change(vector<int> v ){
    v[2] = 99;
}
int main(){
    vector <int> v = { 3,4,8,2,9 ,7};
    change(v);
    cout<<v[2]<<endl;
}