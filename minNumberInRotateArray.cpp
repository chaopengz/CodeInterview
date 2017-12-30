//
// Created by cpz on 2017/12/28.
//
#include "head.h"

class Solution {
public:
    int minNumberInRotateArray(vector<int> array)
    {

        int low = 0;
        int high = array.size() - 1;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (array[mid] > array[high])
            {
                low = mid + 1;
            } else if (array[mid] == array[high])
            {
                high = high - 1;

            } else
            {
                high = mid;
            }
        }
        return array[low];
    }
};