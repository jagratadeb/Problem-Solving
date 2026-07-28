class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // Convert all 0s to -1s
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) nums[i] = -1;
        }

        int sum = 0;
        int maxLength = 0;

        unordered_map<int, int> f; 
        // map[sum] = earliest index where this sum occurred
        f[0] = -1; // sentinel value

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (f.find(sum) != f.end()) {
                // If sum seen before, update maxLength
                maxLength = max(maxLength, i - f[sum]);
            } else {
                // Store first occurrence of this sum
                f[sum] = i;
            }
        }

        return maxLength;
    }
};
