//
// Created by cpz on 2017/12/28.
//
#include "head.h"

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray)
    {
        if (!rotateArray.size())
            return 0;
        if (rotateArray.size() == 1)
            return rotateArray[0];

        vector<int> v;
        v.push_back(INT32_MAX);
        for (auto item : rotateArray)
            v.push_back(item);
        v.push_back(INT32_MAX);


        int low = 1, high = rotateArray.size();

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (v[mid] < v[mid - 1] && v[mid] < v[mid + 1])
                return v[mid];
            else if (v[mid] >= v[1]&&v[mid])
            {
                low = mid + 1;
            } else
            {
                high = mid - 1;
            }
        }
    }
};