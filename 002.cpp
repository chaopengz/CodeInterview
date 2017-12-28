//
// Created by cpz on 2017/12/28.
//
#include "head.h"

class Solution {
public:
    void replaceSpace(char *str, int length)
    {
        int cnt = 0;
        for (int i = 0; i < length; ++i)
        {
            if (*(str + i) == ' ')
                cnt++;
        }

        int newLength = length + cnt * 2;
        int j = newLength - 1;
//        char *newstr = new char(newLength + 1);

        for (int i = length - 1; i >= 0; --i)
        {
            if (str[i] == ' ')
            {
                *(str + j--) = '0';
                *(str + j--) = '2';
                *(str + j--) = '%';
            } else
            {
                *(str + j--) = str[i];
            }
        }
    }
};