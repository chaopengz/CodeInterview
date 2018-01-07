#include <iostream>
#include "printMatrix.cpp"
#include "buildTree.h"

bool binarySearch(vector<int> nums, int target)
{
    int len = nums.size();
    int low = 0, high = len - 1;
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

int main()
{
    int a[]= {1,2,3,4,6,8,10};
    vector<int> v(a,a+7);
    cout<<binarySearch(v,4);
}

