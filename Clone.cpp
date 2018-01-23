//
// Created by cpz on 2018/1/23.
//
#include "head.h"

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;

    RandomListNode(int x) :
            label(x), next(nullptr), random(nullptr)
    {
    }
};

class Solution {
public:
    RandomListNode *Clone(RandomListNode *pHead)
    {
        unordered_map<RandomListNode *, RandomListNode *> m;
        RandomListNode *oldP = pHead;
        RandomListNode *newHead = new RandomListNode(0);
        RandomListNode *node, *newPre = newHead;
        while (oldP)
        {
            node = new RandomListNode(oldP->label);
            m[oldP] = node;
            newPre->next = node;
            newPre = newPre->next;
            oldP = oldP->next;
        }
        oldP = pHead;
        while (oldP)
        {
            m[oldP]->random = m[oldP->random];
            oldP = oldP->next;
        }
        return newHead->next;
    }
};
