class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            int j=i;
            string temp="";
            while(j<s.size() and s[j]!=' ')
            {
                temp+=s[j];
                j++;
            }
            i=j;
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans+=" ";
            
        }
        ans.pop_back();
        return ans;
    }
};