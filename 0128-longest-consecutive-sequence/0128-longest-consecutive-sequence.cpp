class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(), nums.end());

        int ans = 0;
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            int curr = nums[i];
            int consec = nums[i + 1];

            if (curr + 1 == consec) {
                count++;
                ans = max(ans, count);
            } else if (curr != consec) {
                count = 0;
            }
        }

        return ans + 1;
    }
};
