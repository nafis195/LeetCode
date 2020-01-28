// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Leetcode - Linked List Cycle
// Problem Statement - https://leetcode.com/problems/linked-list-cycle/
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
    bool hasCycle(ListNode* head) {
        ListNode* temp = head;
        ListNode* current = head;

        if (head == NULL)
            return false;

        while (true)
        {
            if (current->next == NULL)
                return false;

            current = current->next;

            if (temp->next != NULL)
                temp = temp->next->next;
            else
                return false;

            if (current == NULL || temp == NULL)
                return false;

            if (current == temp)
                return true;
        }
    }
};