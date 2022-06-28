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

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return NULL;
        ListNode* firstptr=head;
        int len=1;
        while(firstptr->next!=NULL)
        {
            len++;
            firstptr=firstptr->next;
        }
        firstptr->next=head;
        k=k%len;
         len=len-k;
        //firstptr=head;
        while(len--)
        {
            firstptr=firstptr->next;
        }
        head=firstptr->next;
        firstptr->next=NULL;
        return head;
        
        
       
    }
};