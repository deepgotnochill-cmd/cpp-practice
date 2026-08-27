class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 1, right = n;
        while(left <= right){
            long long mid = left + (right - left) / 2;
            long long coinsNeeded = mid * (mid + 1) / 2;
            if(coinsNeeded == n){
                return mid;
            }
            else if (coinsNeeded < n){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return right;
    }
};