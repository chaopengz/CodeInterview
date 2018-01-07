//
// Created by cpz on 2018/1/7.
//
#include "head.h"

class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV)
    {
        int len = pushV.size();
        int i = 0, j = 0;
        while (j < len || i < len)
        {
            if (st.empty())
            {
                st.push(pushV[i++]);
            } else if (popV[j] == st.top())
            {
                st.pop();
                j++;
            } else
            {
                st.push(pushV[i++]);
            }
        }
        return st.empty();
    }

    stack<int> st;
};