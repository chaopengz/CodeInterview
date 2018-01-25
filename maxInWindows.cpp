//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    vector<int> maxInWindows(const vector<int> &num, unsigned int size)
    {
        int len = num.size();
        if (!len || size <= 0 || len < size)
            return vector<int>();
        int maxNum;
        vector<int> ans;

        for (int i = size - 1; i < len; ++i)
        {
            maxNum = INT32_MIN;
            for (int j = 0; j < size; ++j)
            {
                maxNum = max(maxNum, num[i - j]);
            }
            ans.push_back(maxNum);
        }
        return ans;
    }
};
