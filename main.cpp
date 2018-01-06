#include <iostream>
#include "Mirror.cpp"
#include "buildTree.h"

int main()
{
    BuildTree buildTree;
    TreeNode *root1 = buildTree.stringToTree("[8,6,10,5,7,9,11]");
    Solution solution;
    solution.Mirror(root1);

}

