//
// Created by cpz on 2018/1/4.
//

#include "head.h"

class Solution {
public:
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k)
    {
        ListNode *p1, *p2;
        p1 = pListHead;
        p2 = pListHead;
        for (int i = 0; i < k; ++i)
        {
            if (p1)
                p1 = p1->next;
            else
                return nullptr;
        }
        while (p1)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        return p2;
    }
};