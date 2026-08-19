class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = 0;
        int max_diff = INT_MAX;
        int diff = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                    return sum;
                else if (sum > target) {
                    diff = abs(sum - target);
                    if (diff < max_diff) {
                        max_diff = diff;
                        res = sum;
                    }
                    right--;
                } else {
                    diff = abs(sum - target);
                    if (diff < max_diff) {
                        max_diff = diff;
                        res = sum;
                    }
                    left++;
                }
            }
        }
        return res;
    }
};