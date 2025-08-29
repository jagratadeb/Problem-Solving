#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;

        for (int num : nums)
        {
            freq[num]++;
        }

        vector<pair<int, int>> freqVec(freq.begin(), freq.end());

        sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b)
             { return a.second > b.second; });

        vector<int> topK;
        for (int i = 0; i < k; i++)
        {
            topK.push_back(freqVec[i].first);
        }

        return topK;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = sol.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
