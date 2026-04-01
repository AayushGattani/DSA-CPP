class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> rt(n);
        rt[n - 1] = 0;
        st.push(n - 1);
        for (int i = n - 2; i > -1; i--) {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }
            if (st.empty()) {
                rt[i] = 0;
            } else {
                rt[i] = st.top() - i;
                st.push(i);
            }
            st.push(i);
        }
        return rt;
    }
};