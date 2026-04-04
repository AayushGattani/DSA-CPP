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

        string result = "";

        while (!st.empty()) {
            auto p = st.top();
            st.pop();
            result = string(p.second, p.first) + result;
        }

        return result;
    }
};