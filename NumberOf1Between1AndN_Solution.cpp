//
// Created by cpz on 2018/1/23.
//
#include "head.h"

class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int factor = 1;
        int left, right;//left的最后一位是1的可能数
        int ans = 0, count;
        int leftRight;
        left = n / factor;
        right = n % factor;
        while (left > 0)
        {
            leftRight = left % 10;
            if (leftRight > 1)
            {
                count = (left / 10 + 1) * factor;
            } else if (leftRight == 1)
            {
                count = left / 10 * factor + (right + 1);
            } else
            {
                count = left / 10 * factor;
            }
            ans += count;
            factor *= 10;
            left = n / factor;
            right = n % factor;
        }
        return ans;
    }
};