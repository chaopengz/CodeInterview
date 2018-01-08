#include <iostream>
#include "TreeDepth.cpp"
#include "buildTree.h"

int main()
{
    Solution solution;
    BuildTree buildTree;
    TreeNode *root = buildTree.stringToTree("[1,2,3]");
    cout << solution.TreeDepth(root);
}

