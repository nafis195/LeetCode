// Bismillahir Rahmanir Rahim
// Nafis Khan Chowdhury
// LeetCode - 876 - Middle of the Linked List
// Problem Statement - https://leetcode.com/problems/middle-of-the-linked-list
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
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head;

        while (p)
        {
            p = p->next;
            if (p)
            {
                p = p->next;
                q = q->next;
            }
        }
        return q;
    }
};