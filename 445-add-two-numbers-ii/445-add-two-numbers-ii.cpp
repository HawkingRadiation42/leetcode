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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        while (curr1 != NULL) {
            s1.push(curr1->val);
            curr1 = curr1->next;
        }

        while (curr2 != NULL) {
            s2.push(curr2->val);
            curr2 = curr2->next;
        }

        ListNode* result = NULL;
        int carry = 0;


        while (!s1.empty() || !s2.empty() || carry != 0) {
            int sum = carry;

            if (!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }

            if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }

            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);
            newNode->next = result;
            result = newNode;
        }

        return result;
    }

};