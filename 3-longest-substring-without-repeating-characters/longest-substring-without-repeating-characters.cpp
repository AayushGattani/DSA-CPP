class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int low=0;
        int high,res=0;
        int n=s.length();
        for(high=0;high<n;high++){
            f[s[high]]++;
            int len=high-low+1;

            while(f[s[high]]>1){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
                len=high-low+1;
            }
                res=max(high-low+1,res);
        }
        return res;
        
    }
};