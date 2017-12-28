#include <iostream>
#include "006.cpp"

int main()
{
    Solution so;
    int a[] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5);
    cout << so.minNumberInRotateArray(v);
}
