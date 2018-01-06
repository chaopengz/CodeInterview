//
// Created by cpz on 2018/1/6.
//

#include "head.h"

class Solution {
public:
    vector<int> printMatrix(vector<vector<int>> matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        printOneLoop(matrix, 0, 0, m - 1, n - 1);
        return ans;
    }

    void printOneLoop(vector<vector<int>> matrix, int i, int j, int m, int n)
    {
        int rows = m - i;
        int cols = n - j;

        for (int k = j; k <= n; ++k)
        {
            ans.push_back(matrix[i][k]);
        }
        for (int l = i + 1; l <= m; ++l)
        {
            ans.push_back(matrix[l][n]);
        }
        for (int i1 = n - 1; i1 >= j; --i1)//
        {
            if (m != i)
                ans.push_back(matrix[m][i1]);
        }
        for (int k1 = m - 1; k1 > i; --k1)
        {
            if (n != j)
                ans.push_back(matrix[k1][j]);
        }
        if (rows > 1 && cols > 1)
            printOneLoop(matrix, i + 1, j + 1, m - 1, n - 1);
    }

    vector<int> ans;
};