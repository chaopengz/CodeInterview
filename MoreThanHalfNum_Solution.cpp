//
// Created by cpz on 2018/1/23.
//

#include "head.h"

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers)
    {
        unordered_map<int, int> m;
        int len = numbers.size();
        if (!len)
            return 0;
        for (auto i:numbers)
        {
            m[i]++;
            if (m[i] > len / 2)
                return i;
        }
        return 0;
    }
};