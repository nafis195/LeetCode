// Bismillahir Rahmanir Rahim
// Nafis Khan Chowdhury
// LeetCode - 234 - Palindrome Linked List
// Problem Statement - https://leetcode.com/problems/palindrome-linked-list/
// Main.cpp



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL)
            return true;

        if (head->next == NULL)
            return true;

        ListNode* p = head;
        ListNode* q = head;

        while (p != NULL && p->next != NULL)
        {
            p = p->next->next;
            q = q->next;
        }

        q = reverse(q);
        p = head;

        while (q != NULL)
        {
            if (p->val != q->val)
                return false;
            p = p->next;
            q = q->next;
        }
        return true;
    }


public:
    ListNode* reverse(ListNode* k)
    {
        if (k->next == NULL)
            return k;

        ListNode* x = k;
        ListNode* y = NULL;
        ListNode* z = NULL;

        while (x != NULL)
        {
            z = y;
            y = x;
            x = x->next;
            y->next = z;
        }

        k = y;
        return k;
    }
};