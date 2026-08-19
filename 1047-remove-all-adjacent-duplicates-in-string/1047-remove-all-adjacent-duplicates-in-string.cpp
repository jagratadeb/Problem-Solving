class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (st.empty() or s[i] != st.top()) {
                st.push(s[i]);
            } else {
                st.pop();
            }
        }

        while (!st.empty()) {
            char ele = st.top();
            st.pop();
            ans += ele;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};