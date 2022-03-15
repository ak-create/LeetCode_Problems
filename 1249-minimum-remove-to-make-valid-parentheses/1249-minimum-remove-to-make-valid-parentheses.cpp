class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int cnt_open=0,cnt_closed=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt_open++;
                ans.push_back(s[i]);
            }
            else if(s[i]==')'){
                if(cnt_open>cnt_closed){
                    ans.push_back(s[i]);
                    cnt_closed++;}
                }
            else{
                ans.push_back(s[i]);
            }      
        }
        string res="";
        cnt_open=0,cnt_closed=0;
        for(int j=ans.size()-1;j>=0;j--){
             if(ans[j]==')'){
                cnt_closed++;
                res.push_back(ans[j]);
            }
            else if(ans[j]=='('){
                if(cnt_closed>cnt_open){
                    res.push_back(ans[j]);
                    cnt_open++;}
                }
            else{
                res.push_back(ans[j]);
            }      
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};