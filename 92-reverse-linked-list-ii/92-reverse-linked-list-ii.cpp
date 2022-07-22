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
     ListNode* rev(ListNode* head, ListNode* tail)
    {
        ListNode* curr=head,*prev=NULL,*nxt=head->next;
        while(prev!=tail)
        {
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt)nxt=nxt->next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int l, int r) {
         ListNode* dummy= new ListNode(-1);
        dummy->next=head;
         ListNode* left_prev=dummy,*curr=head,*left=NULL,*right=NULL;
        int cnt=0;
        while(curr!=NULL)
        {
           cnt++;
            
            if(cnt==l)
                left=curr;

              if(left==NULL)
                left_prev=curr;
            
            if(cnt==r)
                right=curr;
                
            // left_prev=curr;
            curr=curr->next;
        }
        if(left==NULL or right==NULL)
            return head;
        ListNode* right_next=right->next;
        ListNode* revHead=rev(left,right);
        left->next=right_next;
        left_prev->next=revHead;
        return dummy->next;
    }
};