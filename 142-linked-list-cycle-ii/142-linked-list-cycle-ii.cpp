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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int flag=0;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                flag=1;
                break;
            }
        }
        if(!flag)
            return NULL;
        else{
            slow=head;
            if(slow==fast)
                return fast;
            
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
            return fast->next;
            
            
            
        }
    }
};