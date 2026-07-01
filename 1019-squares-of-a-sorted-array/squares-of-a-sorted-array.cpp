class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int k = n - 1;
        vector<int> ans(n);
        while (low <= high) {
            if (abs(nums[low]) > abs(nums[high])) {
                int x = nums[low] * nums[low];
                ans[k] = x;
                low++;
            } else {
                ans[k] = nums[high] * nums[high];
                high--;
            }
            k--;
        }
        return ans;
    }
};