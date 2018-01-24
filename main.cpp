#include <iostream>
#include "InversePairs.cpp"

//#include "buildTree.h"
//
int main()
{
    Solution solution;
    int a[] = {4, 2, 3, 1, 5};
    vector<int> v(a, a + 5);
//    cout << solution.InversePairsN2(v) << endl;
    solution.InversePairs(v);
}



