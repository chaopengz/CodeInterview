//
// Created by cpz on 2018/1/4.
//
#include "head.h"

class Solution {
public:
    void reOrderArray(vector<int> &array)
    {
        vector<int> odd;
        vector<int> even;
        for (auto i:array)
        {
            if (i % 2)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        array.clear();
        for (auto i:odd)
            array.push_back(i);
        for (auto i:even)
            array.push_back(i);
    }
};
