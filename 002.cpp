//
// Created by cpz on 2017/12/28.
//
#include "head.h"

class Solution {
public:
    void replaceSpace(char *str, int length)
    {
        string s;
        int cnt = 0;
        char c;
        for (int i = 0; i < length; ++i)
        {
            c = *(str + i);
            s += c;
            if (c == ' ')
                cnt++;
        }
        int newLength = length + cnt * 2;
        int j = newLength - 1;


        str = new char(newLength + 1);

        for (int i = length - 1; i >= 0; --i)
        {
            if (s[i] == ' ')
            {
                *(str + j--) = '0';
                *(str + j--) = '2';
                *(str + j--) = '%';
            } else
            {
                *(str + j--) = s[i];
            }
        }
        printf("%s\n", str);
    }
};