class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , high = n - 1;
        int neg = 0;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(nums[mid] < 0){
                neg = mid + 1;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        low = 0;
        high = n - 1;
        int firstPos = n;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > 0){
                firstPos = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        int pos = n - firstPos;
        return max(neg, pos);
    }
};