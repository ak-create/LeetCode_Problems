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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode *tail=head;
        if(v.size()==0)
            return NULL;
        else
        head->val=v[0];
        for(int i=1;i<v.size();i++){
            ListNode* temp=new ListNode(v[i]);
           // temp->val=v[i];
            tail->next=temp;
            tail=temp;
            
        }
        return head;
    }
};