//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    vector<int> multiply(const vector<int> &A)
    {
        if (A.size() <= 1)
            return vector<int>();

        vector<int> preSumV;
        preSumV.push_back(1);
        vector<int> postSumV;
        postSumV.push_back(1);

        vector<int> B;
        int preSum = 1, postSum = 1;
        int len = A.size();
        for (int i = 0; i < len; ++i)
        {
            preSum *= A[i];
            preSumV.push_back(preSum);
            postSum *= A[len - i - 1];
            postSumV.push_back(postSum);
        }
        int n;
        for (int i = 1; i <= len; ++i)
        {
            n = preSumV[i - 1] * postSumV[len - i];
            B.push_back(n);
        }
        return B;
    }
};
