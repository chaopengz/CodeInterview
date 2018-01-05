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
        int mid;
        while (low < high)
        {
            mid = low + (high - low) / 2;
            if (array[mid] > array[high])//最小值一定在mid右边
            {
                low = mid + 1;
            } else if (array[mid] == array[high])//最小值有可能在mid左边,也有可能在右边
            {
                high = high - 1;//去掉重复的
            } else//array[mid]<array[high] => mid右边是单调,mid是右边最小得数,也可能是左边最小的数,所以high = mid,而非high = mid-1
            {
                high = mid;
            }
        }
        return array[low];
//        int minNum = INT32_MAX;
//        for (auto i:array)
//        {
//            minNum = min(minNum, i);
//        }
//        return minNum;
    }
};