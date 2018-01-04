//
// Created by cpz on 2018/1/4.
//
#include "head.h"

class Solution {
public:
    ListNode *ReverseList(ListNode *pHead)
    {
        stack<int> s;
        while (pHead)
        {
            s.push(pHead->val);
            pHead = pHead->next;
        }
        ListNode *head = new ListNode(0);
        ListNode *pre = head, *p;
        if (s.empty())
            return nullptr;
        while (!s.empty())
        {
            p = new ListNode(s.top());
            s.pop();
            pre->next = p;
            pre = p;
        }
        return head->next;
    }
};
