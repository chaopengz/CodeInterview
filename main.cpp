#include <iostream>
//#include "Fibo nacci.cpp"
#include "head.h"

bool find(vector<int> nums, int target);

int main()
{
    int a[] = {1, 2, 3, 5, 6, 7, 8};
    vector<int> v(a, a + 7);
    cout << find(v, 8);
}

bool find(vector<int> nums, int target)
{
    int low = 0, high = nums.size() - 1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return true;
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}