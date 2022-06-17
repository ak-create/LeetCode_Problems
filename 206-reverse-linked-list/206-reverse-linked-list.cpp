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
    ListNode* recreverse(ListNode* head)
    {
        if(head->next==NULL)return head;
        
        ListNode* rechead=recreverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return rechead;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        
        return recreverse(head);
        
        // ListNode* curr=head,*prev=NULL,*nxt=head->next;
        // while(curr!=NULL)
        // {
        //     curr->next=prev;
        //     prev=curr;
        //     curr=nxt;
        //     if(nxt!=NULL)
        //     nxt=nxt->next;
        // }
        // return prev;
    }
};