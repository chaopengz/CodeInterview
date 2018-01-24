//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    string ReverseSentence(string str)
    {
        vector<string> words;
        string ans;
        string word;
        int len = str.size();
        for (int i = 0; i < len; ++i)
        {
            if (str[i] == ' ')
            {
                words.push_back(word);
                word = "";
            } else
            {
                word += str[i];
            }
        }
        words.push_back(word);
        for (int j = words.size() - 1; j >= 1; --j)
        {
            ans += words[j];
            ans += ' ';
        }
        ans += words[0];
        return ans;
    }
};
