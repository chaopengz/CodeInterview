//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum)
    {
        int target;
        vector<int> ans;
        int len = array.size();
        vector<int>::iterator *it;
        for (int i = 0; i < len; ++i)
        {
            target = sum - array[i];
            if (binary_search(array.begin() + i, array.end(), target))
            {
                int biggerIndex = lower_bound(array.begin(), array.end(), target) - array.begin();
                ans.push_back(array[i]);
                ans.push_back(array[biggerIndex]);
                break;
            }
        }
        return ans;
    }
};
