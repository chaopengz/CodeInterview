//
// Created by cpz on 2018/1/7.
//

#include "head.h"

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence)
    {
        for (auto i:sequence)
            nums.push_back(i);
        int len = sequence.size();
        return VerifySquenceOfBST(0, len - 1);
    }

    bool VerifySquenceOfBST(int i, int j)
    {
        if (i == j)
            return true;
        //root is s[j]
        int root = nums[j];
        int l = -1;//l第一个比root小的
        for (int k = j - 1; k >= i; --k)
        {
            if (nums[k] < root)
            {
                l = k;
                break;
            }
        }
        if (l == j - 1)//right is null
        {
            return isAllLeft(i, j) && VerifySquenceOfBST(i, j - 1);
        } else if (l == -1) // left is null
        {
            return isAllRight(i, j) && VerifySquenceOfBST(i, j - 1);
        } else
        {
            return isBST(i, j, l) && VerifySquenceOfBST(i, l) &&
                   VerifySquenceOfBST(l + 1, j - 1);
        }
    }

    bool isAllLeft(int i, int j) //[i..j-1] < [j]
    {
        for (int k = i; k < j; ++k)
        {
            if (nums[k] > nums[j])
                return false;
        }
        return true;
    }

    bool isAllRight(int i, int j) //[i..j-1] > [j]
    {
        for (int k = i; k < j; ++k)
        {
            if (nums[k] < nums[j])
                return false;
        }
        return true;
    }

    bool isBST(int i, int j, int k) //[i..k..j] k是第一个比nums[j]小的
    {
        int root = nums[j];
        for (int l = i; l <= k; ++l)
        {
            if (nums[l] > root)
                return false;
        }
        for (int m = k + 1; m < j; ++m)
        {
            if (nums[m] < root)
                return false;
        }
        return true;
    }

    vector<int> nums;
};