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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempa = headA;
        ListNode *tempb = headB;
        while (tempa != tempb){
            tempa = tempa != NULL ? tempa->next : headB;
            tempb = tempb != NULL ? tempb->next : headA;
        }
        return tempa;
    }
};