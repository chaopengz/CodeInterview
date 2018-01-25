//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    void Insert(int num)
    {
        nums.push_back(num);
    }

    double GetMedian()
    {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        if (len % 2)//odd
        {
            return nums[len / 2];
        } else
        {
            return (nums[len / 2 - 1] + nums[len / 2]) / double(2.0);
        }
    }
    vector<int> nums;
};