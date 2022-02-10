class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2 )
            return NULL;
        
        if(!list1)
            return list2;
        
        if(!list2)
            return list1;
        
        ListNode *dummy = new ListNode(-1), *cur = dummy;
       
        
        
        
        while (list1 && list2) {
            if(list1->val > list2->val) {
                cur->next = list2;
                list2 = list2->next;
            }
            
            else {
                cur->next = list1;
                list1 = list1->next;
            }
            cur = cur->next;
        }
        
        if (!list2) {
            cur->next = list1;
        }
        
        else {
            cur->next = list2;
        }
        
        
        
        return dummy->next;
    }
};