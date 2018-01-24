//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    string PrintMinNumber(vector<int> numbers)
    {
        vector<string> strs;
        string ans = "";
        for (auto i:numbers)
        {
            strs.push_back(to_string(i));
        }
        sort(strs.begin(), strs.end(), compare);
        for (auto i:strs)
            ans += i;
        return ans;
    }

    static bool compare(string str1, string str2)
    {
        string s1 = str1 + str2, s2 = str2 + str1;
        if (s1 < s2)
            return true;
        else
            return false;
    }
};