//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    string LeftRotateString(string str, int n)
    {
        if (!str.size())
            return "";
        string ans;
        int len = str.size();
        n = n % len;
        for (int i = n; i < len; ++i)
        {
            ans += str[i];
        }
        for (int j = 0; j < n; ++j)
        {
            ans += str[j];
        }
        return ans;
    }
};
