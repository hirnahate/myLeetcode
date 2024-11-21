class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head)
        return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;  
            fast = fast->next->next;       
        }

        return slow;
    }
};