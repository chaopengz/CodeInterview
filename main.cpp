#include <iostream>
#include "HasSubtree.cpp"
#include "buildTree.h"

int main()
{
    BuildTree buildTree;
    TreeNode *root1 = buildTree.stringToTree("[8,8,7,9,2,null,null,null,null,4,7]");
    TreeNode *root2 = buildTree.stringToTree("[8,9,2]");
    Solution solution;
    cout << solution.HasSubtree(root1, root2);
}

