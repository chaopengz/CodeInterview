#include <iostream>
#include "VerifySquenceOfBST.cpp"
#include "buildTree.h"

int main()
{
    Solution solution;
    int a[] = {3, 8, 9};
    vector<int> v(a, a + 3);
    cout << solution.VerifySquenceOfBST(v);
}

