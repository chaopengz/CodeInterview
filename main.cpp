#include <iostream>
#include "IsPopOrder.cpp"


int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {4, 5, 3, 2, 1};
    int c[] = {4, 3, 5, 1, 2};
    vector<int> va(a, a + 5);
    vector<int> vb(b, b + 5);
    vector<int> vc(c, c + 5);
    cout << solution.IsPopOrder(va, vc);

}

