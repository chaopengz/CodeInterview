//
// Created by cpz on 2018/1/6.
//

#include "head.h"

class Solution {
public:
    void Mirror(TreeNode *pRoot)
    {
        if(!pRoot)//null node
            return;
        if(!pRoot->left && !pRoot->right)//leaf node
            return;
        else
        {
            TreeNode *temp;
            temp = pRoot->left;
            pRoot->left = pRoot->right;
            pRoot->right = temp;
            Mirror(pRoot->left);
            Mirror(pRoot->right);
        }
    }
};