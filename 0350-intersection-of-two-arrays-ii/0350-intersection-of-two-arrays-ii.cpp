class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map <int, int> seen;

        for(int num: nums1) seen[num]++;

        for(int num: nums2)
        {
            if(seen[num] > 0)
            {
                res.push_back(num);
                seen[num]--;
            }
        }
        return res;
    }
};