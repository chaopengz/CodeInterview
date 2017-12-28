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

        int low = 0, high = rotateArray.size() - 1;

        while (low < high)
        {
            int mid = (low + high) / 2;
            if (rotateArray[mid] < rotateArray[mid - 1] && rotateArray[mid] < rotateArray[mid + 1])
                return rotateArray[mid];
            else if (rotateArray[mid] > rotateArray[high])

        }
        if (low + 1 == rotateArray.size() - 1)
            return rotateArray[0];
        else
            return rotateArray[low + 1];
    }
};