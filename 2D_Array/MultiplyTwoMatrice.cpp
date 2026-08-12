#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();

        vector<vector<int>> res(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        return res;
    }
};

int main() {
    vector<vector<int>> a = {
        {1, 2},
        {3, 4}
    };

    vector<vector<int>> b = {
        {5, 6},
        {7, 8}
    };

    Solution obj;

    vector<vector<int>> result = obj.multiply(a, b);

    // Print result
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}