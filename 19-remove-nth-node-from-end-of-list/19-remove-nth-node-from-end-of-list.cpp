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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
   //  ListNode* curr=head;
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
         ListNode* curr=dummy;
        while(curr!=NULL)
        {
            len++;
            curr=curr->next;
        }
        curr=dummy;
        int m=len-n;
        while(m>1)
        {
            m--;
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return dummy->next;
    }
};