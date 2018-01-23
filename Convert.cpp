//
// Created by cpz on 2018/1/8.
//

#include "head.h"

class Solution {
public:
    TreeNode *Convert(TreeNode *pRootOfTree)
    {
        if (!pRootOfTree)
            return nullptr;
        nodes.push(nullptr);
        MidTravel(pRootOfTree);
        TreeNode *pre, *currentNode;
        pre = nullptr;
        while (nodes.size() > 1)
        {
            currentNode = nodes.top();
            nodes.pop();
            currentNode->right = pre;
            currentNode->left = nodes.top();
            pre = currentNode;
        }
        return pre;
    }

    void MidTravel(TreeNode *root)
    {
        if (!root)
            return;
        MidTravel(root->left);
        nodes.push(root);
        MidTravel(root->right);
    }

    stack<TreeNode *> nodes;
};