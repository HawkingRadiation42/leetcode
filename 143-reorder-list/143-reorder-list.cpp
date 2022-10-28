class Solution {
public:
    void reorderList(ListNode* head) {
        // exiting for empty lists
        if (!head) return;
        // finding the central node with the hare approach
        ListNode *tmp = head, *half = head, *prev = NULL;
        while (tmp->next && tmp->next->next) {
            tmp = tmp->next->next;
            half = half->next;
        }
        // adding one bit in case of lists with even length
        if (tmp->next) half = half->next;
        // reversing the second half
        while (half) {
            tmp = half->next;
            half->next = prev;
            prev = half;
            half = tmp;
        }
        half = prev;
        // merging the 2 lists
        while (head && half) {
            tmp = head->next;
            prev = half->next;
            head->next = half;
            half->next = tmp;
            head = tmp;
            half = prev;
        }
        // closing when we had even length arrays
        if (head && head->next) head->next->next = NULL;
    }
};