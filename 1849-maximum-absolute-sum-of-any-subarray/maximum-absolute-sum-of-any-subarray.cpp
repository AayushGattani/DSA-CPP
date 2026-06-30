class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int bestending=nums[0];
        int minending=nums[0];
        int minsum=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=bestending+nums[i];
            int v3=minending+nums[i];
            bestending=max(v1,max(v2,v3));
            minending= min(v1,min(v2,v3));
            minsum=min(minsum,minending);
            maxsum=max(maxsum,bestending);

        }
        return max(abs(minsum),maxsum);
        
    }
};