class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>vs;
        for(int i=0;i<s.size();i++){
            int j=i;
            string t="";
            while(j<s.size()&&s[j]>96){
                t.push_back(s[j]);
                j++;
            }
            vs.push_back(t);
            i=j;
        }
        map<char,string>mp;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])==mp.end())
            mp[pattern[i]]=vs[i];
            else{
                if(mp[pattern[i]]!=vs[i])
                    return false;
            }
            
        }
        map<string,char>mp1;
        for(int i=0;i<pattern.size();i++){
            if(mp1.find(vs[i])==mp1.end())
            mp1[vs[i]]=pattern[i];
            else{
                if(mp1[vs[i]]!=pattern[i])
                    return false;
            }
            
        }
        if(pattern.size()!=vs.size())
            return false;
        
        return true;
    }
};