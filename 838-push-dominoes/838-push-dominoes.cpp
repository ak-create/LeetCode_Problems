class Solution {
public:
    string pushDominoes(string dominoes) {
        vector<pair<int,int>>vp(dominoes.size(),{0,0});
        int power=0;
        for(int i=0;i<dominoes.size();i++)
        {
            if(dominoes[i]=='R')
                power=1e8;
            if(dominoes[i]=='L')
                power=0;
            
            if(power!=0)
            vp[i].first=power--;
        }
        power=0;
         for(int i=dominoes.size()-1;i>=0;i--)
        {
            if(dominoes[i]=='L')
                power=1e8;
             if(dominoes[i]=='R')
                 power=0;
            
             if(power!=0)
            vp[i].second=power--;
        }
        string ans="";
        for(int i=0;i<dominoes.size();i++)
        {
            //cout<<vp[i].first<<" "<<vp[i].second<<endl;
            if(vp[i].first==vp[i].second)
                ans+=".";
            else if(vp[i].first>vp[i].second)
                ans+="R";
            else
                ans+="L";
                
        }
      //  cout<<endl;
        return ans;
    }
};