//
// Created by cpz on 2017/12/27.
//
#include "head.h"

class Solution {
public:
    bool Find(int target, vector<vector<int>> array)
    {
        int n = array.size();
        int m = array[0].size();
        int i = 0, j = m - 1;
        while (i < n && j >= 0)
        {
            if (array[i][j] == target)
                return true;
            else if (array[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
    }
};
