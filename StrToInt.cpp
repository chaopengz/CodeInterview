//
// Created by cpz on 2018/1/25.
//

#include "head.h"

class Solution {
public:
    int StrToInt(string str)
    {
        int i = 0;
        bool isPos = true;
        if (str[i] == '+')
        {
            isPos = true;
            i++;
        } else if (str[i] == '-')
        {
            isPos = false;
            i++;
        }
        int len = (int) str.size();
        int sum = 0;
        while (i < len)
        {
            if (str[i] <= '9' && str[i] >= '0')
                sum = sum * 10 + str[i] - '0';
            else
                return 0;
            i++;
        }
        if (isPos)
            return sum;
        else
            return -sum;
    }
};