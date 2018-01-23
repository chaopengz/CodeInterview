//
// Created by cpz on 2018/1/23.
//

#include "head.h"

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array)
    {

        int ans = INT32_MIN;
        int minPreSum = 0;//最小前序和
        int sum = 0;//当前前序和
        for (auto i:array)
        {
            sum += i;
            ans = max(ans, sum - minPreSum);
            minPreSum = min(sum, minPreSum);
        }
        return ans;
    }
};