//
// Created by cpz on 2017/12/28.
//

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
#include "head.h"

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode *head)
    {
        if (!head)
            return vector<int>();
        ListNode *p = head;
        vector<int> ans;
        stack<int> st;
        while (p)
        {
            st.push(p->val);
            p = p->next;
        }
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};