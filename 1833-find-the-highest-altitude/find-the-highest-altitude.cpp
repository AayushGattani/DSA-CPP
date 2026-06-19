class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int previous=0;
        int n=gain.size();
        vector<int>arr(n+1);
        int highaltitude= previous;
        for(int i=0;i<gain.size();i++){
            arr[i+1]=gain[i]+previous;
            previous=arr[i+1];
            highaltitude=max(highaltitude,previous);
        }
        return highaltitude;
    }
};