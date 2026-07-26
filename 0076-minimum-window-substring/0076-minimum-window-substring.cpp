class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        for (char c : t)
            need[c]++;

        int low = 0;
        int high = 0;
        int start = 0;
        int minL = INT_MAX;
        int reqd = t.size();

        for (; high < s.size(); high++) {
            if (need[s[high]] > 0)
                reqd--;
            need[s[high]]--;

            while (reqd == 0) {
                int len = high - low + 1;
                if (len < minL) {
                    minL = len;
                    start = low;
                }
                need[s[low]]++;
                if (need[s[low]] > 0)
                    reqd++;
                low++;
            }
        }

        return (minL == INT_MAX) ? "" : s.substr(start, minL);
    }
};

// Shrink
// need[s[low]]++
// if(need[s[low]] > 0)reqd++

// Expand
// if(need[s[high]] > 0) reqd--
// need[s[high]]--