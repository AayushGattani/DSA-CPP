#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int subarrays = 1;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= maxSum) {
                sum += nums[i];
            } else {
                subarrays++;
                sum = nums[i];

                if (subarrays > k) return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};