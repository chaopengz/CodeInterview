#include <iostream>
#include "Print2.cpp"

#include "buildTree.h"

//
int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5, 6, 10, 21, 30, 50};
    vector<int> v(a, a + 10);
    BuildTree buildTree;
    TreeNode *root = buildTree.stringToTree("[1,2,3,4,5,6,7]");
    solution.Print(root);
}



