//
// Created by cpz on 2018/1/4.
//
#include "head.h"

class Solution {
public:
    double Power(double base, int exponent)
    {
        double result = 1.0;
        bool isNag = exponent < 0;
        int ex = abs(exponent);
        for (int i = 0; i < ex; ++i)
        {
            result *= base;
        }
        if (isNag)
            return 1 / result;
        else
            return result;
    }
};