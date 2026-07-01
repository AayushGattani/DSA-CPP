class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]]++;
        }
        for (char c : s) {
            if (mp[c] == 0) {
                return false;
            }
            mp[c]--;
            if(mp[c]==0){
                mp.erase(c);
            }
        }
        return mp.empty();
    }
};