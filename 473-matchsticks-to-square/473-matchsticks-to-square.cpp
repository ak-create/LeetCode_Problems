class Solution {
public:
  bool rec(int ind,vector<int>&matchsticks,vector<int>&v,int tar)
  {
      if(ind==matchsticks.size()){
         if(v[0]==v[1] and v[0]==v[2] and v[0]==v[3])
          return true;
      else
          return false;}
     // bool ak=false;
      for(int i=0;i<4;i++)
      {
          if(v[i]>tar)
              continue;
            int j = i;
            while (--j >= 0) // third
                if (v[i] == v[j]) 
                    break;
            if (j != -1) continue;
          v[i]+=matchsticks[ind];
          if(rec(ind+1,matchsticks,v,tar))
              return true;
          v[i]-=matchsticks[ind];
      }
      return false;

  }
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        for(int x:matchsticks)
            sum+=x;
        if(sum%4!=0 or matchsticks.size()<4)return false;
        vector<int>v(4,0);
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        return rec(0,matchsticks,v,sum/4);
    }
};