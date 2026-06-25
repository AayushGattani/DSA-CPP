class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n);
        stack<int> s;
        res[n - 1] = 0;
        s.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!s.empty() && temperatures[s.top()] <= temperatures[i]) {
                s.pop();
            }
            if (s.empty()) {
                res[i] = 0;
            } else {
                res[i] = s.top()-i;
            }
            s.push(i);
        }
        return res;
    }
};