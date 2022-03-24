class Solution {
public:
unordered_map<int,int>mp;
    
    int brokenCalc(int x, int y) {
        if(y==x)
            return 0;
        int ans=0;
       while(y!=x){
           if(y>x){
               if(y%2==0)
               y=y/2;
               else
                   y++;
               ans++;
           }
           else{
               y++;
               ans++;
           }
       }
        return ans;
    }
};