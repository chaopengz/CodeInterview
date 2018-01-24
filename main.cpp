#include <iostream>
#include "GetNumberOfK.cpp"

//#include "buildTree.h"
//
int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5, 5, 6, 7};
    vector<int> v(a, a + 8);
    cout << solution.GetNumberOfK(v, 5);
}



