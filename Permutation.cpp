//
// Created by cpz on 2018/1/23.
//

#include "head.h"

class Solution {
public:
    vector<string> Permutation(string str)
    {
        if (!str.size())
            return vector<string>();
        vector<string> ans;
        sort(str.begin(), str.end());
        do
        {
            ans.push_back(str);
        } while (next_permutation(str.begin(), str.end()));
        return ans;
    }
};