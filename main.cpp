#include <iostream>
#include "Merge.cpp"

void printListNode(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    Solution solution;
    int a[] = {1, 2, 3, 4, 6, 8, 10, 11};
    int b[] = {2, 4, 5, 7, 9};
    ListNode *head1 = new ListNode(a[0]);
    ListNode *pre = head1, *p;
    for (int i = 1; i < 8; ++i)
    {
        p = new ListNode(a[i]);
        pre->next = p;
        pre = p;
    }
    ListNode *head2 = new ListNode(b[0]);
    pre = head2;
    for (int i = 1; i < 5; ++i)
    {
        p = new ListNode(b[i]);
        pre->next = p;
        pre = p;
    }
    ListNode *phead = solution.Merge(head1, head2);
    printListNode(phead);

}

