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
        
        ListNode* s=head,*e=head;
        int inc=k-1;
        while(inc--)
        {
            e=e->next;
            if(e==NULL)return head;
        }
       ListNode* recHead= reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=recHead;
        return e;
        
//         return recreverse(head);
        
//         LisNode* temp=head;
//         int len=0;
//         while(temp!=NULL)
//         {
//             len++;
//             temp=temp->next;
//         }
//         while(len>k)
//         {
//             len-=k;
//         }
        
    }
};