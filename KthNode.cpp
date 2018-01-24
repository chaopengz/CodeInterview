//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    TreeNode *KthNode(TreeNode *pRoot, int k)
    {
        if (!pRoot || k <= 0)
            return nullptr;
        vector<TreeNode *> v;
        midTravel(pRoot, v);
        int len = v.size();
        if (k <= len)
            return v[k - 1];
        else
            return nullptr;
    }

    void midTravel(TreeNode *root, vector<TreeNode *> &v)
    {
        if (!root)
            return;
        midTravel(root->left, v);
        v.push_back(root);
        midTravel(root->right, v);
    }

};
