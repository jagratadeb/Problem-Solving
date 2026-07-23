class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int preSum = 0;
        int count = 0;

        unordered_map <int, int> freq;
        freq[0] = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            preSum += nums[i];
            int remove = preSum - k;
            count += freq[remove];
            freq[preSum]++;
        }

        return count;
    }
};