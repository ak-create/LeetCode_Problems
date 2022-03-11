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
        vector<int>v;
        if(head==NULL)
          return NULL; 
        ListNode* temphead=head;
        while(temphead!=NULL){
            v.push_back(temphead->val);
            temphead=temphead->next;
        }
        int rl=k%v.size();
        vector<int>newlist;
        int i=v.size()-rl;
        int cnt=0;
        while(cnt!=rl){
           newlist.push_back(v[i]);
            i++;
            cnt++;
        }
        for(int j=0;j<v.size()-rl;j++){
            newlist.push_back(v[j]);
        }
        if(newlist.size()==0)
            return NULL;
            
            ListNode* nhead=new ListNode(newlist[0]);
            ListNode* tail=nhead;
           int ind=1;
        while(ind!=newlist.size()){
            ListNode * temp=new ListNode(newlist[ind]);
            tail->next=temp;
            tail=temp;
            ind++;
        }
        return nhead;
        
        
        
    }
};