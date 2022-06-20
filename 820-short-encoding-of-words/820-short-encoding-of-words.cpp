class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string>s;
         int n=words.size();
        for(int i=0;i<n;i++)
            s.insert(words[i]);
        
       // int n=words.size();
        for(int i=0;i<n;i++)
        {
            int cnt=0,flag=0;
            for(int j=0;j<n;j++)
            {
                if(j!=i and words[i].size()<=words[j].size()){
                int indi=words[i].size()-1,indj=words[j].size()-1;
                while(indi>=0 and words[i][indi]==words[j][indj]){
                    indi--;
                    indj--;}
                if(indi==-1 and words[i]!=words[j])
                {
                    if(s.find(words[i])!=s.end())
                        s.erase(words[i]);
                }
                }
                    
                
            }
        }
        int ans=0;
        for(auto it=s.begin();it!=s.end();it++)
        {
            ans+=((*it).size());
            ans++;
        }
        
        return ans;
    }
};