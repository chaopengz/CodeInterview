#include <iostream>
#include "MoreThanHalfNum_Solution.cpp"
//#include "buildTree.h"

int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    vector<int> v(a, a + 9);
    cout << solution.MoreThanHalfNum_Solution(v);
}

