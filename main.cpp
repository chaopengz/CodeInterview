#include <iostream>
#include "Convert.cpp"
#include "buildTree.h"

int main()
{
    Solution solution;
    BuildTree buildTree;
    TreeNode *root = buildTree.stringToTree("[5,3,8,1,4,6,9]");
    TreeNode *head = solution.Convert(root);
    while (head->right)
    {
        head = head->right;
    }
    while (head)
    {
        cout << head->val << " ";
        head = head->left;
    }
}

