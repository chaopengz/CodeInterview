#include <iostream>
#include "FindPath.cpp"
#include "buildTree.h"

int main()
{
    Solution solution;
    BuildTree buildTree;
    TreeNode *root = buildTree.stringToTree("[1,2,3,4,5,3,6]");
    solution.FindPath(root, 7);
}

