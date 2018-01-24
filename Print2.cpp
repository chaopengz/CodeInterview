//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    vector<vector<int> > Print(TreeNode *pRoot)
    {
        if (!pRoot)
            return vector<vector<int>>();
        queue<TreeNode *> q;
        int len;
        q.push(pRoot);
        vector<int> v;
        vector<vector<int>> ans;
        TreeNode *node;
        while (!q.empty())
        {
            len = q.size();
            v.clear();
            for (int i = 0; i < len; ++i)
            {
                node = q.front();
                q.pop();
                v.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            ans.push_back(v);
        }
        return ans;

    }

};
