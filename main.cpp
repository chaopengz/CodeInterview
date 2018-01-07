#include <iostream>
#include "PrintFromTopToBottom.cpp"
#include "buildTree.h"

int main()
{
    Solution solution;
    BuildTree buildTree;
    TreeNode *root = buildTree.stringToTree("[1,2,3,4,null,null,5,6,7]");
    vector<int> ans;
    ans = solution.PrintFromTopToBottom(root);
    for (auto i:ans)
        cout << i << " ";

}

