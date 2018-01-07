#include <iostream>
#include "VerifySquenceOfBST.cpp"

int main()
{
    Solution solution;
    int a[] = {1, 4, 3, 6, 9, 5, 8};
//    int b[] = {7, 8, 9, 10};
    vector<int> v(a, a + 7);
    cout << solution.VerifySquenceOfBST(v);
}

