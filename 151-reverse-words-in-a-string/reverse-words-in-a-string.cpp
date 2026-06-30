class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());

        string ans = "";

        for(int i = 0; i < s.length(); ) {

            // Skip extra spaces
            while(i < s.length() && s[i] == ' ')
                i++;

            string word = "";

            // Extract one word
            while(i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the word
            reverse(word.begin(), word.end());

            // Add to answer
            if(word != "") {

                if(ans != "")
                    ans += " ";

                ans += word;
            }
        }

        return ans;
    }
};