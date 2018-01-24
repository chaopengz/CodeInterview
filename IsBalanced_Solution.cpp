//
// Created by cpz on 2018/1/24.
//

#include "head.h"

class Solution {
public:
    bool IsBalanced_Solution(TreeNode *pRoot)
    {
        if (!pRoot)
            return true;
        int m = abs(depth(pRoot->left) - depth(pRoot->right));
        bool isBalance = (m <= 1);
        return isBalance & IsBalanced_Solution(pRoot->left) & IsBalanced_Solution(pRoot->right);
    }

    int depth(TreeNode *root)
    {
        if (!root)
            return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }
};