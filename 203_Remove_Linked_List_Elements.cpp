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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(!head)
            return NULL;
        
        ListNode* dummy = new ListNode(-1), *cur = dummy;
        dummy->next = head;
        
        while(cur->next){
            if(cur->next->val == val) {
                ListNode *t =cur->next;
                cur->next = t->next;
                t->next = NULL;
                delete t;
            }
            else {
                cur = cur->next;
            }
        }
        
//         while(head) {
//             if(head->val == val){
//                 if(head->next)
//                     cur->next = head->next;
//                 else
//                     cur->next = NULL;
//             }
            
//             head = head->next;
//             cur = cur->next;
                
//         }
        return dummy->next;
    }
};