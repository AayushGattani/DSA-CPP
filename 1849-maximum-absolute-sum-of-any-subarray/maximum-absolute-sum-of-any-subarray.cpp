class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int endmax=nums[0];
        int endmin=nums[0];
        int result=abs(nums[0]);
        int bestending=nums[0];
        for(int i=1;i<nums.size();i++){
            endmax=max(nums[i],endmax+nums[i]);
            endmin=min(nums[i],endmin+nums[i]);
            bestending= max(endmax,abs(endmin));
            result=max(result,bestending);
        }
        return result;
        
    }
};