// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// LeetCode - 21 - Merge Two Sorted Lists
// Problem Statement - https://leetcode.com/problems/merge-two-sorted-lists/
// Main.cpp





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newList = NULL;
        ListNode* newHead = NULL;

        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;

        if (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                newList = l1;
                l1 = l1->next;
            }
            else
            {
                newList = l2;
                l2 = l2->next;
            }
            newHead = newList;
        }

        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                newList->next = l1;
                newList = l1;
                l1 = l1->next;
            }
            else
            {
                newList->next = l2;
                newList = l2;
                l2 = l2->next;
            }
        }
        if (l1 == NULL)
            newList->next = l2;
        if (l2 == NULL)
            newList->next = l1;

        return newHead;
    }
};