#include <iostream>
#include "KthNode.cpp"

#include "buildTree.h"

//
int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5, 6, 10, 21, 30, 50};
    vector<int> v(a, a + 10);
    BuildTree buildTree;
    TreeNode *root = buildTree.stringToTree("[5,3,7,2,4,6,8]");
    TreeNode *node = solution.KthNode(root, 8);
    if (node)
        cout << node->val;
}



