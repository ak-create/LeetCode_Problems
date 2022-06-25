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
    // void display(ListNode* head)
    // {
    //     while(head!=NULL)
    //     {
    //         cout<<head->val<<" ";
    //         head=head->next;
    //     }
    // }
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL)
            return head;
        ListNode* p=NULL,*c=head,*n=head->next;
        while(c!=NULL)
        {
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)
            n=n->next;
        }
        return p;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head,*slow=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
       slow->next=reverse(slow->next);
        
       // display(head);
       // cout<<endl;
        ListNode* curr=head,*mid=slow->next;
        while(mid!=NULL)
        {
            if(curr->val!=mid->val)
                return false;
            curr=curr->next;
            mid=mid->next;
        }
        
        slow->next=reverse(slow->next);
        return true;
    }
};