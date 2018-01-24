#include <iostream>
#include "FindNumbersWithSum.cpp"

#include "buildTree.h"

//
int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5, 6, 10, 21, 30, 50};
    vector<int> v(a, a + 10);
    solution.FindNumbersWithSum(v, 80);
}



