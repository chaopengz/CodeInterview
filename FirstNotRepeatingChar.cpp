//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    int FirstNotRepeatingChar(string str)
    {
        if (!str.size())
            return -1;
        unordered_map<char, int> m;
        for (auto i:str)
        {
            m[i]++;
        }
        for (int j = 0; j < str.size(); ++j)
        {
            if (m[str[j]] == 1)
                return j;
        }
        return -1;
    }
};