//
// Created by cpz on 2018/1/4.
//

#include "head.h"

class Solution {
public:
    bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2)//2 is a child or not
    {
        if (!(pRoot1 && pRoot2))//有一个为空
            return false;
        else
        {
            return isSame(pRoot1, pRoot2) || HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
        }
    }

    bool isSame(TreeNode *root1, TreeNode *root2)
    {
        if ((!root1) && (!root2))
            return true;
        if (!(root1 && root2))
            return false;
        else
            return root1->val == root2->val && isSame(root1->left, root2->left) &&
                   isSame(root1->right, root2->right);
    }
};