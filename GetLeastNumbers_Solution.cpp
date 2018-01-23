//
// Created by cpz on 2018/1/23.
//

#include "head.h"

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
    {
        if (!input.size() || input.size() < k || k == 0)
            return vector<int>();
        vector<int> v;
        int len = input.size();
        for (int i = 0; i < k; ++i)
        {
            v.push_back(input[i]);
        }
        sort(v.begin(), v.end());

        for (int j = k; j < len; ++j)
        {
            if (input[j] >= v[k - 1])
                continue;
            else if (input[j] < v[0])
            {
                for (int i = 1; i < k; ++i)
                {
                    v[i] = v[i - 1];
                }
                v[0] = input[j];
            } else
            {
                int i;
                for (i = k - 2; i >= 0; --i)
                {
                    if (v[i] > input[j])
                        v[i + 1] = v[i];
                    else
                        break;
                }
                v[++i] = input[j];
            }
        }
        return v;
    }
};