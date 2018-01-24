//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    int InversePairsN2(vector<int> data)
    {
        int mod = 1000000007;
        int len = data.size();
        int ans = 0;
        for (int i = 1; i < len; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (data[j] > data[i])
                    ans++;
            }
        }
        return ans % mod;
    }

    int InversePairs(vector<int> data)
    {
        int len = data.size();
        quick_sort(data, 0, len - 1);
        for (auto i:data)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << count << endl;
    }

    void quick_sort(vector<int> &v, int left, int right)
    {
        if (left >= right)
            return;
        int temp = v[left], t;
        int i = left, j = right;
        while (i < j)
        {
            while (i < j && v[j] >= temp)
                j--;
            while (i < j && v[i] <= temp)
                i++;
            if (i < j)
            {
                t = v[i];
                v[i] = v[j];
                v[j] = t;
                count++;
            }
        }
        //i==j
        v[left] = v[i];//将相遇位置的值赋给基准值位置
        v[i] = temp;//基准值归位
        quick_sort(v, left, i - 1);
        quick_sort(v, i + 1, right);
    }

    int count = 0;
};