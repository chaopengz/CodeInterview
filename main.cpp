#include <iostream>
#include "GetUglyNumber_Solution.cpp"

//#include "buildTree.h"
//
int main()
{
    Solution solution;
    int a[] = {3, 32, 321};
//    int a[] = {3334,3,3333332};
    vector<int> v(a, a + 3);
    cout << solution.GetUglyNumber_Solution(13);
}



