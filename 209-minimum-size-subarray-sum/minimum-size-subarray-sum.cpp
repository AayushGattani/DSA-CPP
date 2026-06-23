class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int sum=0;
        int n=nums.size();
        int res=INT_MAX;
        for(int high=0;high<n;high++){
            sum+=nums[high];
            while(sum>=target){
                int length=high-low+1;
                res=min(res,length);
                sum=sum-nums[low];
                low++;
            }
            
        }
        return (res==INT_MAX)?0:res;
    }
};



/*class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int sum=0;
        int n=nums.size();
        int res= INT_MAX;
        for(int high=0; high<n ; high++){
            sum+=nums[high];
            while(sum>=target){
                int length = high-low+1 ;
                res=min(res,length);
                sum=sum-nums[low];
                low++;

            }
        }
        return (res==INT_MAX)?0:res;*/