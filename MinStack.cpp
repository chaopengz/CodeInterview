#include <sys/stat.h>

//
// Created by cpz on 2018/1/7.
//
#include "head.h"

class Solution {
public:
    Solution()
    {
        m[0] = INT32_MAX;
    }

    void push(int value)
    {
        st.push(value);
        if (value >= m[st.size() - 1])
            m[st.size()] = m[st.size() - 1];
        else
            m[st.size()] = value;
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
        return m[st.size()];
    }

    stack<int> st;
    unordered_map<int, int> m;
};
