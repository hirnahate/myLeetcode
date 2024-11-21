class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
        return nullptr;
    
        while(head && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        
        ListNode* curr = head;
        while(curr && curr->next){
            if(curr->next->val == val){
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
        
        return head;
        }
};