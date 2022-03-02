class Solution {
public:
    bool isSubsequence(string s, string t) {
        int stind=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            for(int j=stind;j<t.size();j++){
                if(t[j]==s[i]){
                    stind=j+1;
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==s.size())
            return true;
        return false;
    }
};