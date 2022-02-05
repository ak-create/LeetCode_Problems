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
    
    ListNode* merge2Lists(ListNode* main,ListNode* l)
    {
        ListNode* head=main;
        ListNode* tail=main;
        if(main==NULL&&l==NULL){
            return NULL;
        }
        else if(main==NULL){
            head=l;
            tail=l;
            l=l->next;
        }
        else if(l==NULL){
            head=main;
            tail=main;
            main=main->next;
        }
        else if(main!=NULL&&l!=NULL){
            if(main->val>l->val){
                head=l;
                tail=l;
                l=l->next;
            } 
            else{
                head=main;
                tail=main;
                main=main->next;
            }
        }
        
        while(main!=NULL&&l!=NULL){
            if(main->val<=l->val){
                tail->next=main;
                tail=main;
                main=main->next;
            }
             else{
                tail->next=l;
                tail=l;
                l=l->next;
            }
        }
        
        while(main!=NULL){
            tail->next=main;
            tail=main;
            main=main->next;
        }
        while(l!=NULL){
            tail->next=l;
            tail=l;
            l=l->next;
        }
        
        return head;
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head;
        if(lists.size()>=1)
         head=lists[0];
        else
            return NULL;
        for(int i=1;i<lists.size();i++){
          ListNode* temp=  merge2Lists(head,lists[i]);
            head=temp;
        }
        return head;
    }
};