#include <iostream>
#include "printMatrix.cpp"
#include "buildTree.h"

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[] = {9, 10, 11, 12};
    int d[] = {13, 14, 15, 16};
    vector<int> va(a, a + 4);
    vector<int> vb(b, b + 4);
    vector<int> vc(c, c + 4);
    vector<int> vd(d, d + 4);
    vector<vector<int>> vv;
    vv.push_back(va);
    vv.push_back(vb);
    vv.push_back(vc);
    //vv.push_back(vd);
    Solution solution;
    vector<int> ans;
    ans = solution.printMatrix(vv);
    for (auto i:ans)
        cout << i << " ";
}

