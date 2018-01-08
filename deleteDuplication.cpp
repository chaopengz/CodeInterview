//
// Created by cpz on 2018/1/8.
//

#include "head.h"

class Solution {
public:
    ListNode *deleteDuplication(ListNode *pHead)
    {
        ListNode *p = pHead, *pre;
        while (p)
        {
            cout << p->val;
            p = p->next;
            pre = p;
        }
    }
};