#include <iostream>
#include "NumberOf1Between1AndN_Solution.cpp"
//#include "buildTree.h"

int countOne(int n)
{
    int ans = 0;
    while (n)
    {
        if (n % 10 == 1)
            ans++;
        n = n / 10;
    }
    return ans;
}

int countOneUnitN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += countOne(i);
    }
    return sum;
}


int main()
{
    Solution solution;
    for (int i = 1; i < INT32_MAX; ++i)
    {
        int ans1, ans2;
        ans1 = solution.NumberOf1Between1AndN_Solution(i);
        ans2 = countOneUnitN(i);
        if (ans1 != ans2)
            cout << i << " " << ans1 << " " << ans2 << endl;
        else
            cout << i << " " << ans1 << " " << ans2 << endl;
    }
}

