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
     void reverse(ListNode* head,ListNode* end)
    {
        // if(head==end)
        //     return head;
        ListNode* p=NULL,*c=head,*n=head->next;
        while(p!=end)
        {
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)
            n=n->next;
        }
       // return p;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
          if(head==NULL or head->next==NULL or k==1)
            return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* beforest=dummy,*e=head;
        int i=0;
        while(e!=NULL)
        {
            i++;
            if(i%k==0)
            {
                ListNode* s=beforest->next,*temp=e->next;
                reverse(s,e);
                beforest->next=e;
                s->next=temp;
                beforest=s;
                e=temp;
            }
            else
            e=e->next;
        }
        return dummy->next;
        
    }
};