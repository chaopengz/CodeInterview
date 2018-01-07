//
// Created by cpz on 2018/1/7.
//

#include "head.h"

class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root)
    {
        if (!root)
            return vector<int>();
        queue<TreeNode *> q;
        vector<int> ans;
        q.push(root);
        int len;
        TreeNode *node;
        while (!q.empty())
        {
            len = q.size();
            for (int i = 0; i < len; ++i)
            {
                node = q.front();
                q.pop();
                ans.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }
        return ans;
    }
};