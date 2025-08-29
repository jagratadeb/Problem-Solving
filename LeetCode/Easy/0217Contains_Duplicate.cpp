#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Your Solution class
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.count(num))
                return true;
            seen.insert(num);
        }
        return false;
    }
};

int main()
{
    // Test case 1: Contains duplicates
    vector<int> nums1 = {1, 2, 3, 1};

    // Test case 2: No duplicates
    vector<int> nums2 = {1, 2, 3, 4};

    Solution sol;

    if (sol.containsDuplicate(nums1))
    {
        cout << "nums1 contains duplicates." << endl;
    }
    else
    {
        cout << "nums1 does not contain duplicates." << endl;
    }

    if (sol.containsDuplicate(nums2))
    {
        cout << "nums2 contains duplicates." << endl;
    }
    else
    {
        cout << "nums2 does not contain duplicates." << endl;
    }

    return 0;
}
