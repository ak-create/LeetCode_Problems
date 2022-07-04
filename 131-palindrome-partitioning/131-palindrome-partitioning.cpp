class Solution {
public:
    bool pal(vector<string>&ds)
    {
        for(int i=0;i<ds.size();i++)
        {
            string p=ds[i],s=ds[i];
            reverse(s.begin(),s.end());
            if(s!=p)
                return false;
        }
        return true;
    }
    void rec(string &s,int ind,vector<string>&ds,vector<vector<string>>&ans)
    {
        if(ind==s.size())
        {
            bool ak= pal(ds);
            if(ak)
            ans.push_back(ds);
            
            return;
        }
        for(int i=ind;i<s.size();i++){
        string ss="";
        ss+=s.substr(ind,i-ind+1);
        ds.push_back(ss);
        rec(s,i+1,ds,ans);
        ds.pop_back();
       // rec(s,i+1,ds,ans);
    }
       
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        rec(s,0,ds,ans);
        return ans;
    }
};