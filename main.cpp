#include <iostream>
#include "006.cpp"

int main()
{
    Solution so;
    int a[] = {2, 1};
    vector<int> v(a, a + 2);
    cout << so.minNumberInRotateArray(v);
}
