#include <sys/stat.h>

//
// Created by cpz on 2018/1/7.
//
#include "head.h"

class Solution {
public:
    void push(int value)
    {
        st.push(value);
        if (value < minNum)
            minNum = value;
    }

    void pop()
    {
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int min()
    {
        return minNum;
    }

    stack<int> st;
    int minNum = INT32_MAX;
    unordered_map<int, int> m;
};
