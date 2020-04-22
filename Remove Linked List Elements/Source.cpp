// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Leetcode - 203 - Remove Linked List Elements
// Problem Statement - https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode();
        temp->next = head;
        head = temp;

        while (head->next != NULL)
        {
            if (head->next->val == val)
                head->next = head->next->next;
            else
                head = head->next;
        }
        return temp->next;
    }
};