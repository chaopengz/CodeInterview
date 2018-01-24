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
        return mergeSort(data, 0, data.size() - 1);
    }

    int mergeSort(vector<int> &data, int start, int end)
    {
        int inv = 0;
        int mid = (start + end) / 2;
        if (end > start)
        {
            inv = (inv % mod + mergeSort(data, start, mid) % mod) % mod;
            inv = (inv % mod + mergeSort(data, mid + 1, end) % mod) % mod;
            inv = (inv % mod + merge(data, start, mid, end) % mod) % mod;
        }
        return inv;
    }

    int merge(vector<int> &data, int start, int mid, int end)
    {
        int inv = 0;
        vector<int> temp;
        int i = start, j = mid + 1;
        int count = end - start + 1;
        while (count)
        {
            if (i > mid)
                temp.push_back(data[j++]);
            else if (j > end)
                temp.push_back(data[i++]);
            else if (data[i] < data[j])
                temp.push_back(data[i++]);
            else//data[i] > data[j]
            {
                inv = (inv % mod + (mid - i + 1) % mod) % mod;
                temp.push_back(data[j++]);
            }
            count--;
        }
        for (int k = start; k <= end; ++k)
        {
            data[k] = temp[k - start];
        }
        return inv;
    }

    int mod = 1000000007;
};