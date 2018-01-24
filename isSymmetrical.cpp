//
// Created by cpz on 2018/1/24.
//
#include "head.h"

class Solution {
public:
    bool isSymmetrical(TreeNode *pRoot)
    {
        if (!pRoot)
            return true;
        return isSym(pRoot->left, pRoot->right);
    }

    bool isSym(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
            return true;
        else if (left && right)
        {
            if (left->val != right->val)
                return false;
            return isSym(left->left, right->right) && isSym(left->right, right->left);
        } else
        {
            return false;
        }
    }

};