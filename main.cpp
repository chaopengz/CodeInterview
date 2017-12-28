#include <iostream>
#include "003.cpp"

int main()
{
    int a[] = {1, 2, 3, 4};
    auto *head = new ListNode(a[0]);
    ListNode *pre, *p;
    pre = head;
    for (int i = 1; i < 4; ++i)
    {
        p = new ListNode{a[i]};
        pre->next = p;
        pre = p;
    }
    Solution so;
    so.printListFromTailToHead(head);
}
