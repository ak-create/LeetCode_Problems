class Solution {
public:
    unordered_set<int>us;
    
    int cal(int ind)
    {
        int i=ind;
        while(ind and us.find(ind)!=us.end())
        {
            ind--;
        }
            
            if(ind)us.insert(ind);
            return (i-ind);
    }
    
   int minDeletions(string s) {
        vector<int>v(26,0);
       us.clear();
      // unordered_set<int>us;
      //  int mx=0;
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']++;
           // mx=max(mx,v[s[i]-'a']);
        }
        for(int i=0;i<26;i++){
            if(v[i]>0)
            us.insert(v[i]);}
        
       sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int ans=0,j=25;
        for(int i=24;i>=0;i--)
        {
            if(v[i]==v[i+1] and v[i]!=0)
                ans+=(cal(v[i]));
        }
    return ans;
        
    }
};