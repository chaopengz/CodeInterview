#include <iostream>
#include "maxInWindows.cpp"

#include "buildTree.h"

//
int main()
{
    Solution solution;
    int a[] = {2, 3, 4, 2, 6, 2, 5, 1};
    vector<int> v(a,a+8);
    solution.maxInWindows(v,3);
}



