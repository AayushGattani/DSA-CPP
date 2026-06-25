class Solution {
public:
    string removeDuplicates(string s, int k) {

        stack<pair<char, int>> st;

        for (char c : s) {

            if (!st.empty() && st.top().first == c) {

                st.top().second++;

                if (st.top().second == k) {
                    st.pop();
                }

            } else {

                st.push({c, 1});
            }
        }

        string ans = "";

        while (!st.empty()) {

            pair<char, int> p = st.top();
            st.pop();

            for (int i = 0; i < p.second; i++) {
                ans.push_back(p.first);
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};