//
// Created by cpz on 2017/12/30.
//

#include "head.h"

class Solution {
public:
    int Fibonacci(int n)
    {
        vector<int> a;
        a.push_back(1);
        a.push_back(1);
        if (n <= 2)
            return a[n - 1];
        for (int i = 2; i <= n; ++i)
        {
            a.push_back(a[i - 1] + a[i - 2]);
        }
        return a[n-1];
    }
};