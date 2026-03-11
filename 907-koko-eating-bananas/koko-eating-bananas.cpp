class Solution {
public:

    long long calculateHours(vector<int>& piles, int k){
        long long total = 0;

        for(int pile : piles){
            total += ceil((double)pile / k);
        }

        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low < high){

            int mid = low + (high - low) / 2;

            if(calculateHours(piles, mid) <= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};