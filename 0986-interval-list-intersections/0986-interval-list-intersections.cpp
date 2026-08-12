class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                             vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int i = 0;
        int j = 0;
        while (i < firstList.size() and j < secondList.size()) {
            int s1 = firstList[i][0];
            int e1 = firstList[i][1];

            int s2 = secondList[j][0];
            int e2 = secondList[j][1];

            if (max(s1, s2) <= min(e1, e2)) {
                    res.push_back({max(s1,s2), min(e1,e2)});
            }

            if(e1 < e2)
                i++;
            else
                j++;
            }
            return res;
        }
    };