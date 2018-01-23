#include <iostream>
#include "FindGreatestSumOfSubArray.cpp"
//#include "buildTree.h"

int main()
{
    Solution solution;
    int a[] = {6, -3, -2, 7, -15, 1, 2, 2};
    vector<int> v(a, a + 2);
    cout << solution.FindGreatestSumOfSubArray(v);
}

