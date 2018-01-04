//
// Created by cpz on 2018/1/4.
//
#include "head.h"

class Solution {
public:
    int rectCover(int number)
    {
        if (!number)
            return 0;
        vector<int> dp;
        dp.push_back(1);
        dp.push_back(2);
        if (number < 3)
            return dp[number - 1];
        for (int i = 2; i < number; ++i)
        {
            dp.push_back(dp[i - 1] + dp[i - 2]);
        }
        return dp[number - 1];
    }
};
