class Solution {
public:
    //Function to calculate the length of our linked list
    int length(ListNode *head){
        if(head==nullptr){
            return 0;
        }
        int count =1;
        while(head->next!=nullptr){
            head = head->next;
           count++;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
       int len = length(head);
       ListNode* Newhead;
        if(head==nullptr || len==1){
            return head;
        }
        k = k % len;
        if(k==len || k==0){
            return head;
        }
            int n = len-k-1;
            ListNode* temp = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
            ListNode* temp1 = head;
            for(int i=1;i<=n;i++){
                temp1 = temp1->next;
            }
        Newhead = temp1->next;
        temp1->next = nullptr;
            temp->next = head;
         return Newhead;
    }
};