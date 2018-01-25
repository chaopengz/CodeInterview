//
// Created by cpz on 2018/1/25.
//
#include "head.h"

class Solution {
public:
    ListNode *EntryNodeOfLoop(ListNode *pHead)
    {
        if (!pHead)
            return nullptr;
        ListNode *p = pHead;
        unordered_set<ListNode *> nodes;
        while (p)
        {
            nodes.insert(p);
            if (nodes.count(p->next))
                return p->next;
            else
                p = p->next;
        }
        return nullptr;
    }
};
