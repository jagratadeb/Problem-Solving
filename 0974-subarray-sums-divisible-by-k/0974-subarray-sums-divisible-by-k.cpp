class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int preSum = 0;
        int count = 0;
        freq[0] = 1;
        int remainder = 0;

        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            remainder = preSum % k;
            if (remainder < 0)
                remainder += k;
            count += freq[remainder];
            freq[remainder]++;
        }

        return count;
    }
};