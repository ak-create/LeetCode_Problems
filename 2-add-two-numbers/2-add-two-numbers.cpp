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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL,*curr=head,*nxt=head->next;
        while(curr)
        {
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt)
                nxt=nxt->next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* curr1=l1,*curr2=l2;
        int carry=0;
        ListNode* dummy=new ListNode(-1);
        ListNode* tail=dummy;
        while(curr1 or curr2)
        {
            int val1=0,val2=0;
            
            if(curr1!=NULL){
                val1=curr1->val;
                curr1=curr1->next;
            }
            if(curr2!=NULL){
                val2=curr2->val;
                curr2=curr2->next;
            }
            
            int sum=val1+val2+carry;
            if(sum>=10)
            {
                carry=1;
                sum=sum%10;
            }
            else
                carry=0;
            ListNode* newnode=new ListNode(sum);
            tail->next=newnode;
            tail=tail->next;
            
            
        }
        if(carry){
             ListNode* newnode=new ListNode(1);
            tail->next=newnode;}
            
        return dummy->next;
       // ListNode* nhead=reverse(dummy->next);
       //  return nhead;
    }
};