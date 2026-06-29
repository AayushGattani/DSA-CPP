class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int posending=nums[0];
        int minending=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=posending*nums[i];
            int v2=nums[i];
            int v3=minending*nums[i];
            posending=max(v1,max(v2,v3));
            minending=min(v1,min(v2,v3));
            ans=max(ans,max(posending,minending));
        }
        return ans;
    }
};