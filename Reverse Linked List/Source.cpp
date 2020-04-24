// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// LeetCode - 206 - Reverse Linked List
// Problem Statement - https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* after = NULL;

        while (current != NULL)
        {
            after = current->next;
            current->next = prev;
            prev = current;
            current = after;
        }
        return prev;
    }
};