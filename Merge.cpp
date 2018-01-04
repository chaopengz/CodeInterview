//
// Created by cpz on 2018/1/4.
//

#include "head.h"

class Solution {
public:
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
    {
        ListNode *head = new ListNode(0);
        ListNode *pre = head, *p;
        ListNode *p1 = pHead1;
        ListNode *p2 = pHead2;

        while (p1 && p2)
        {
            if (p1->val < p2->val)
            {

                pre->next = p1;
                pre = p1;
                p1 = p1->next;
            } else
            {
                pre->next = p2;
                pre = p2;
                p2 = p2->next;
            }
        }

        if (p1)
            pre->next = p1;
        if (p2)
            pre->next = p2;

        return head->next;
    }
};