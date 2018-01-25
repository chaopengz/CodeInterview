//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        vector<vector<bool>> visit(rows, vector<bool>(cols, false));
        m = rows, n = cols;

        travel(0, 0, visit, threshold);

        int ans = 0;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (visit[i][j])
                    ans++;
            }
        }
        return ans;
    }

    void travel(int i, int j, vector<vector<bool>> &v, int threshold)
    {
        if (isFit(i, j, threshold))
        {
            v[i][j] = true;
            if (i > 0 && !v[i - 1][j])
                travel(i - 1, j, v, threshold);
            if (i < m - 1 && !v[i + 1][j])
                travel(i + 1, j, v, threshold);
            if (j > 0 && !v[i][j - 1])
                travel(i, j - 1, v, threshold);
            if (j < n - 1 && !v[i][j + 1])
                travel(i, j + 1, v, threshold);
        } else
        {
            return;
        }
    }

    bool isFit(int rows, int cols, int threshold)
    {
        bool inRec = (rows >= 0) && (rows < m) && (cols >= 0) && (cols < n);
        int sum = 0;
        while (rows)
        {
            sum += rows % 10;
            rows /= 10;
        }
        while (cols)
        {
            sum += cols % 10;
            cols /= 10;
        }
        return sum <= threshold && inRec;
    }

    int m;
    int n;
};