class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == 0) nums[i] = -1;
        
        int sum = 0;
        int maxLen = 0;
        unordered_map <int, int> map;
        map[0] = -1;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(map.find(sum) == map.end())
                map[sum] = i;
            else
                maxLen = max(maxLen, i - map[sum]);

        }

        return maxLen;
    }
};
