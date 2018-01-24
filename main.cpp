#include <iostream>
#include "IsBalanced_Solution.cpp"

#include "buildTree.h"

//
int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5, 5, 6, 7};
    vector<int> v(a, a + 8);
    BuildTree buildTree;
    TreeNode *root = buildTree.stringToTree("[1,2,3]");
    cout << solution.IsBalanced_Solution(root);
}



