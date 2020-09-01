// Bismillahir Rahmanir Rahim
// Nafis Khan CHowdhury
// LeetCode - 160 - Intersection of Two Linked Lists
// Problem Statement - https://leetcode.com/problems/intersection-of-two-linked-lists/
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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a_pointer = headA;
        ListNode* b_pointer = headB;

        if (a_pointer == NULL || b_pointer == NULL)
            return NULL;

        while (a_pointer != b_pointer)
        {
            if (a_pointer == NULL)
                a_pointer = headB;
            else
                a_pointer = a_pointer->next;

            if (b_pointer == NULL)
                b_pointer = headA;
            else
                b_pointer = b_pointer->next;
        }
        return a_pointer;
    }
};