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
        
        dummy = head;
        
        for(int i = 0;i<size/2;i++){
            ListNode*element = stack.top();
            stack.pop();
            element->next = dummy->next;
            dummy->next = element;
            dummy= dummy->next->next;
        }
        dummy->next = NULL;
        
    }
};