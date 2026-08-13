class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls = 0;
        int rs = 0;
        int ts = 0;

        for (int num : nums)
            ts += num;

        for (int i = 0; i < nums.size(); i++) {
            rs = ts - ls - nums[i];
            if (ls == rs)
                return i;

            ls += nums[i];
        }
        return -1;
    }
};
