class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> b;

        for(int i=0;i<magazine.length();i++){
            b[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if (b.find(ransomNote[i])!= b.end() && b[ransomNote[i]]>0){
                b[ransomNote[i]]--;
            }
            else {
                return false;
            }
        }
        return true;

    }
};