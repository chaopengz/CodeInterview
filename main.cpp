#include <iostream>
#include "deleteDuplication.cpp"

#include "buildTree.h"

//
int main()
{
    Solution solution;
    ListNode *head = new ListNode(1);
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(1);
    ListNode *node3 = new ListNode(2);

//    head->next = node1;
//    node1->next = node2;
//    node2->next = node3;

    ListNode *ansNode = solution.deleteDuplication(head);
    if (ansNode)
        cout << ansNode->val;
}



