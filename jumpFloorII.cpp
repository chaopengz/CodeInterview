//
// Created by cpz on 2018/1/4.
//
#include "head.h"

class Solution {
public:
    int jumpFloorII(int number)
    {
        if (number == 0 || number == 1)
            return 1;
        return powOf2(number - 1);
    }

    int powOf2(int times)
    {
        int result = 1;
        for (int i = 0; i < times; ++i)
        {
            result *= 2;
        }
        return result;
    }
};