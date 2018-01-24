#include <iostream>
#include "InversePairs.cpp"

//#include "buildTree.h"
//
int main()
{
    Solution solution;
    int a[] = {1,2,3,4,5,6,7,0};
    vector<int> v(a, a + 8);
    cout << solution.InversePairsN2(v) << endl;
    cout << solution.mergeSort(v, 0, 7) << endl;
    for (auto i:v)
    {
        cout << i << " ";
    }
}



