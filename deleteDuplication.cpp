//
// Created by cpz on 2018/1/8.
//

#include "head.h"

class Solution {
public:
    ListNode *deleteDuplication(ListNode *pHead)
    {
        if (!pHead)
            return nullptr;
        bool isNeedAdd;
        ListNode *p = pHead, *pPre = nullptr;
        ListNode *ans = new ListNode(-1);
        ListNode *node, *pre = ans;
        while (p)
        {
            if (p == pHead)//firstNode
            {
                if (p->next)
                {
                    if (p->val == p->next->val)
                        isNeedAdd = false;
                    else
                        isNeedAdd = true;
                } else//single node
                {
                    isNeedAdd = true;
                }
            } else if (!p->next)//lastNode
            {
                if (p->val == pPre->val)
                    isNeedAdd = false;
                else
                    isNeedAdd = true;
            } else
            {
                if (p->val == pPre->val || p->val == p->next->val)
                    isNeedAdd = false;
                else
                    isNeedAdd = true;
            }
            //add node
            if (isNeedAdd)
            {
                node = new ListNode(p->val);
                pre->next = node;
                pre = node;
            }

            pPre = p;
            p = p->next;
        }
        return ans->next;
    }
};