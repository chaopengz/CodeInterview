#include <iostream>
#include "minNumberInRotateArray.cpp"


int main()
{
    Solution solution;
    int a[] = {2};
    vector<int> v(a, a + 1);
    cout << solution.minNumberInRotateArray(v);

}

