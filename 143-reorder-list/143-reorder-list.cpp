class Solution {
public:
    void reorderList(ListNode* head) {
        
        if ((!head) || (!head->next) || (!head->next->next)) return;
        
        stack<ListNode*> stack;
        
        ListNode *dummy = head;
        
        int size=0;
        
        while(dummy!=NULL){
            stack.push(dummy);
            size++;
            dummy = dummy->next;
        }
        
        ListNode *prev = head;
        
        for(int i = 0;i<size/2;i++){
            ListNode*element = stack.top();
            stack.pop();
            element->next = prev->next;
            prev->next = element;
            prev= prev->next->next;
        }
        prev->next = NULL;
        
    }
};