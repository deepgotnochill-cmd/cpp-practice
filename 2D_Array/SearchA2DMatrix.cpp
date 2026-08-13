#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size(), n = arr[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == target)
                    return true;
            }
        }

        return false;
    }
};

int main() {
    vector<vector<int>> arr = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };

    int target = 9;

    Solution s;

    if (s.searchMatrix(arr, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}