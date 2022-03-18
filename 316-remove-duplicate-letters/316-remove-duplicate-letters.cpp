class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>freq(26,0);
        vector<int>vis(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        
        string ans="";
        stack<char>st;
        st.push(s[0]);
        vis[s[0]-'a']=1;
        freq[s[0]-'a']--;
        for(int i=1;i<s.size();i++){
            
            if(vis[s[i]-'a']==0)
            {
            while(st.size()>=1&&st.top()>s[i]&&freq[st.top()-'a']>=1)
            {
                vis[st.top()-'a']=0;
                st.pop();
                
            }
            st.push(s[i]);
            vis[s[i]-'a']=1;
            }    
            freq[s[i]-'a']--;
           
        }
        
        while(st.size())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};