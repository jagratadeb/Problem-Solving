class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> seta(nums1.begin(), nums1.end());
        unordered_set<int> setb(nums2.begin(), nums2.end());
        vector<int> res;
        
        for (auto& num : seta) {
            if (setb.count(num)) {
                res.push_back(num);
            }
        }

        return res;
    }
};