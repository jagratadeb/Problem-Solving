class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        stack<int> st;
        int n = nums.size();
        vector<int> res(n);

        for (int i = (2 * n) - 1; i >= 0; i--) {
            int index = i % n;

            if (st.empty()) {
                if (i < n)
                    res[index] = -1;

                st.push(nums[index]);
                continue;
            }

            if (st.top() > nums[index]) {
                if (i < n)
                    res[index] = st.top();

                st.push(nums[index]);
                continue;
            } else {
                while (!st.empty() && st.top() <= nums[index]) {
                    st.pop();
                }

                if (!st.empty()) {
                    if (i < n)
                        res[index] = st.top();

                    st.push(nums[index]);
                } else {
                    if (i < n)
                        res[index] = -1;

                    st.push(nums[index]);
                }
            }
        }

        return res;
    }
};