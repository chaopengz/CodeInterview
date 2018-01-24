//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum)
    {
        vector<int> sums;
        sums.push_back(0);
        int t = 0;
        int end = (sum + 1) / 2;
        for (int i = 1; i <= end; ++i)
        {
            t += i;
            sums.push_back(t);
        }
        vector<vector<int>> ans;
        vector<int> v;
        vector<int>::iterator *it;
        for (int j = 1; j < end; ++j)
        {
            int target = sum + sums[j - 1];
            if (binary_search(sums.begin(), sums.end(), target))
            {
                v.clear();
                int targetIndex = lower_bound(sums.begin(), sums.end(), target) - sums.begin();
                for (int i = j; i <= targetIndex; ++i)
                {
                    v.push_back(i);
                }
                ans.push_back(v);
            }
        }
        return ans;
    }
};