//
// Created by cpz on 2018/1/23.
//
#include "head.h"

class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int factor = 1;
        int left = 1, right;//left的最后一位是1的可能数
        int ans = 0, count, rightCount, leftCount;
        int leftRight;
        left = n / factor;
        right = n % factor;
        while (left > 0)
        {

            leftRight = left % 10;
            if (leftRight > 1)
            {
                rightCount = factor;
            } else
            {
                rightCount = right + 1;
            }
            leftCount = left / 10 + 1;
            count = leftCount * rightCount;
            ans += count;


            factor *= 10;
            left = n / factor;
            right = n % factor;
        }
        return ans;
    }
};