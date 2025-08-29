#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> anagramGroup;

        for (string &word : strs)
        {
            int count[26] = {0};
            for (char ch : word)
            {
                count[ch - 'a']++;
            }

            string key;
            for (int i = 0; i < 26; i++)
            {
                key = key + "#" + to_string(count[i]);
            }
            anagramGroup[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto &group : anagramGroup)
        {
            result.push_back(group.second);
        }
        return result;
    }
};

int main()
{
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;

    vector<vector<string>> groups = sol.groupAnagrams(input);

    for (const auto &group : groups)
    {
        cout << "[ ";
        for (const auto &word : group)
        {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}
