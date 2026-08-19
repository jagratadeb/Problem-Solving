class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res;
        int diff = 0;
        int max_diff= INT_MAX;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            int left = i + 1;
            int right = n-1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];


                if(sum == target){
                    res = sum;
                    return res;
                }
                else if(sum < target)
                {
                    diff = abs(sum - target);
                    if(max_diff > diff){
                        max_diff = diff;
                        res = sum;
                    }
                    left++;
                }else
                {
                    diff = abs(sum - target);
                    if(max_diff>diff)
                    {
                        max_diff = diff;
                        res = sum;
                    }
                    right--;
                }
            }
        }
        return res;
    }
};