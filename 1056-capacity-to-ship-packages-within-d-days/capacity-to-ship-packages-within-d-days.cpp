class Solution {
public:
    int daysrequired(vector<int>& weights,int cap){
        int load=0;
        int days=1;
        
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load >cap){
                days=days+1;
                load=weights[i];
            }
            else{
                load=load+weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int dayreq=daysrequired(weights,mid);

            if(dayreq<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

        
    }
};