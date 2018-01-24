//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    int GetNumberOfK(vector<int> data, int k)
    {
        vector<int>::iterator low, high;
        if (!binary_search(data.begin(), data.end(), k))
            return 0;

        low = lower_bound(data.begin(), data.end(), k);
        high = upper_bound(data.begin(), data.end(), k);

        return high - low;

    }
};