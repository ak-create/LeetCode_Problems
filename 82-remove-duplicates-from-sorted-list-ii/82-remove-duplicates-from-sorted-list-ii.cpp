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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>freq(205,0);
        set<int>s;
        ListNode * temphead=head;
        while(temphead!=NULL){
            freq[temphead->val+100]++;
            //temphead=temphead->next;
           // s.insert(temphead->val);
             temphead=temphead->next;
            
        }
        
        for(int i=0;i<=200;i++){
            if(freq[i]==1)
                s.insert(i-100);
        }
        if(s.size()==0)
            return NULL;
        else{
            ListNode* head=new ListNode(*s.begin());
            ListNode * tail=head;
            auto it=s.begin();
            it++;
            while(it!=s.end()){
                ListNode* temp= new ListNode(*it);
                tail->next=temp;
                tail=temp;
                
            it++;}
            
            return head;
        }
      
    }
};