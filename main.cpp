#include <iostream>
#include "FindKthToTail.cpp"


int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ListNode *head = new ListNode(a[0]);
    ListNode *pre = head, *p;
    for (int i = 1; i < 9; ++i)
    {
        p = new ListNode(a[i]);
        pre->next = p;
        pre = p;
    }
    ListNode *node = solution.FindKthToTail(head, 10);
    cout << node->val;
}

