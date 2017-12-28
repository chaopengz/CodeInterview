#include <iostream>
#include "004.cpp"

int main()
{
    Solution so;
    int a[] = {1, 2, 4, 7, 3, 5, 6, 8};
    int b[] = {4, 7, 2, 1, 5, 3, 8, 6};
    vector<int> pre(a, a + 8);
    vector<int> mid(b, b + 8);
    so.reConstructBinaryTree(pre, mid);

}
