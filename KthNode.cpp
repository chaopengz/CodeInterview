//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    TreeNode *KthNode(TreeNode *pRoot, int k)
    {
        if (!pRoot)
            return nullptr;
        midTravel(pRoot, k);
        return v.back();
    }

    void midTravel(TreeNode *root, int k)
    {
        if (!root)
            return;
        midTravel(root->left, k);
        if (v.size() < k)
            v.push_back(root);
        else
            return;
        midTravel(root->right, k);
    }
    vector<TreeNode *> v;
};
