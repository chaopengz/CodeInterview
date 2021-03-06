//
// Created by cpz on 2018/1/8.
//
#include "head.h"

class Solution {
public:
    vector<vector<int>> Print(TreeNode *pRoot)
    {
        if (!pRoot)
            return vector<vector<int>>();

        vector<vector<int>> ans;
        vector<int> v;
        queue<TreeNode *> q;
        bool flag = true;
        int len;
        TreeNode *node;
        q.push(pRoot);
        while (!q.empty())
        {
            v.clear();
            len = q.size();
            for (int i = 0; i < len; ++i)
            {
                node = q.front();
                v.push_back(node->val);
                q.pop();
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            if (flag)
                ans.push_back(v);
            else
            {
                reverse(v.begin(), v.end());
                ans.push_back(v);
            }
            flag = !flag;
        }
        return ans;
    }

};