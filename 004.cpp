//
// Created by cpz on 2017/12/28.
//

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include "head.h"

class Solution {
public:
    TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin)
    {
        TreeNode *root;
        int rootVal = pre[0];
        vector<int> leftpre;
        vector<int> leftmid;
        vector<int> rightpre;
        vector<int> rightmid;
        root = new TreeNode(rootVal);
        int index;
        for (index = 0; index < vin.size(); ++index)
        {
            if (vin[index] == rootVal)
                break;
        }
        for (int i = 1; i < pre.size(); ++i)
        {
            if (i <= index)
                leftpre.push_back(pre[i]);
            else
                rightpre.push_back(pre[i]);
        }
        for (int j = 0; j < vin.size(); ++j)
        {
            if (j < index)
                leftmid.push_back(vin[j]);
            else if (j > index)
                rightmid.push_back(vin[j]);
        }
        root->left = reConstructBinaryTree(leftpre, leftmid);
        root->right = reConstructBinaryTree(rightpre, rightmid);
        return root;
    }
};