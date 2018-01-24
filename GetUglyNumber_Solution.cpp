//
// Created by cpz on 2018/1/24.
//

#include "head.h"

class Solution {
public:
    int GetUglyNumber_Solution(int index)
    {
        if (index < 1)
            return 0;
        vector<int> v;
        v.push_back(1);
        int i = 0, j = 0, k = 0;
        while (v.size() < index)
        {
            v.push_back(Min(v[i] * 2, v[j] * 3, v[k] * 5));
            if (v.back() == v[i] * 2) i++;
            if (v.back() == v[j] * 3) j++;
            if (v.back() == v[k] * 5) k++;
        }
        return v.back();
    }

    int Min(int i, int j, int k)
    {
        return min(i, min(j, k));
    }
};