class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        stack<int> st;
        vector<int> res;
        int n = nums.size();

        for (int i = (2 * n) - 1; i >= 0; i--) {
            int index = i % n;

            if (st.empty()) {
                if (i < n)
                    res.push_back(-1);

                st.push(nums[index]);
                continue;
            }

            if (st.top() > nums[index]) {
                if (i < n)
                    res.push_back(st.top());

                st.push(nums[index]);
                continue;
            } else {
                while (!st.empty() && st.top() <= nums[index]) {
                    st.pop();
                }

                if (!st.empty()) {
                    if (i < n)
                        res.push_back(st.top());

                    st.push(nums[index]);
                } else {
                    if (i < n)
                        res.push_back(-1);

                    st.push(nums[index]);
                }
            }
        }

        reverse(res.begin(), res.end());

        return res;
    }
};