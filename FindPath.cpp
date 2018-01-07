//
// Created by cpz on 2018/1/7.
//
#include "head.h"

class Solution {
public:
    vector<vector<int>> FindPath(TreeNode *root, int expectNumber)
    {
        vector<int> v;
        FindPathRec(root, expectNumber, v);
        return ans;
    }

    void FindPathRec(TreeNode *root, int exprectNumbers, vector<int> v)
    {
        if (!root->left && !root->right)//leaf node
        {
            if (exprectNumbers == root->val)
            {
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        } else
        {
            v.push_back(root->val);
            FindPathRec(root->left, exprectNumbers - root->val, v);
            FindPathRec(root->right, exprectNumbers - root->val, v);
        }
    }

    vector<vector<int>> ans;
};