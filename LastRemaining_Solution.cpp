//
// Created by cpz on 2018/1/24.
//
//#include "head.h"

class Solution {
public:
    struct ListNode {
        int val;
        ListNode *next;

        ListNode(int x) : val(x), next(nullptr) {};
    };

    int LastRemaining_Solution(int n, int m)
    {
        if (n <= 1)
            return 0;
        ListNode *head = new ListNode(0);
        ListNode *pre = head, *node = nullptr;
        for (int i = 1; i < n; ++i)
        {
            node = new ListNode(i);
            pre->next = node;
            pre = node;
        }
        if (node)
            node->next = head;

        ListNode *currentNode = head;

        for (int j = 1; j < n; ++j)
        {
            for (int i = 1; i < m; ++i)
            {
                pre = currentNode;
                currentNode = currentNode->next;
            }
            //deleteCurrentNode
            pre->next = currentNode->next;
            currentNode = pre->next;
        }

        if (currentNode)
            return currentNode->val;
    }

};

