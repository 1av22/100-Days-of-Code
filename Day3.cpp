// Day 3
// Adding two numbers using linked list
// Link : https://leetcode.com/problems/add-two-numbers/?envType=featured-list&envId=top-100-liked-questions

#include <iostream>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *dummyAns = new ListNode(0);
    ListNode *curr = dummyAns;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry == 1)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        ListNode *node = new ListNode(sum % 10);
        curr->next = node;
        curr = curr->next;
    }
    return dummyAns->next;
}
