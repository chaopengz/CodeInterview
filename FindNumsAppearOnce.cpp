//
// Created by cpz on 2018/1/24.
//

#include "head.h"

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2)
    {
        unordered_map<int, int> m;
        for (auto i:data)
        {
            m[i]++;
        }
        vector<int> ans;
        for (auto i:data)
        {
            if (m[i] == 1)
                ans.push_back(i);
        }
        *num1 = ans[0];
        *num2 = ans[1];
    }
};