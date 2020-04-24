// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// LeetCode - 237 - Delete Node in a Linked List
// Problem Statement - https://leetcode.com/problems/delete-node-in-a-linked-list/
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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};