class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxdiff=INT_MAX;
        int ans=0;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(target == sum){
                    return sum;
                }
                int diff=abs(target -sum);
                if(diff<maxdiff){
                    maxdiff=diff;
                    ans=sum;
                }
                if(target < sum){
                    k--;
                }
                else{
                    j++;
                }

            }

        }
        return ans;
        
    }
};