//
// Created by cpz on 2018/1/7.
//
#include "head.h"

class Solution {
public:
    vector<vector<int>> FindPath(TreeNode *root, int sum)
    {
        vector<int> v;
        FindPathRec(root, sum, v);
        return ans;
    }

    void FindPathRec(TreeNode *root, int sum, vector<int> v)
    {
        if (!root)
            return;
        if (root->left == nullptr && root->right == nullptr)//leaf node
        {
            if (root->val == sum)
            {
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        FindPathRec(root->left, sum - root->val, v);
        FindPathRec(root->right, sum - root->val, v);
    }

    vector<vector<int>> ans;

};