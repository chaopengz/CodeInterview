#include <iostream>
#include "reOrderArray.cpp"


int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v(a, a + 9);
    solution.reOrderArray(v);
    for (auto i:v)
    {
        cout << i << " ";
    }
}

