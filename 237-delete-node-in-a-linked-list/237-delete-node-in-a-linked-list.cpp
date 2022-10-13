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
        // node->val = node->next->val;
        // node->next = node->next->next;
        ListNode* current = node;
        current->val = current->next->val;
        current->next = current->next->next;
    }
};