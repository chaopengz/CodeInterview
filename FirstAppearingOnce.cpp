//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    //Insert one char from stringstream
    void Insert(char ch)
    {
        str += ch;
        m[ch]++;
    }

    //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        for (int i = 0; i < str.size(); ++i)
        {
            if (m[str[i]] == 1)
                return str[i];
        }
        return '#';
    }
    unordered_map<char, int> m;
    string str = "";
};
