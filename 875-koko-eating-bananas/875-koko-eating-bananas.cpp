class Solution {
public:
    bool isHeFinished(vector<int>&piles,int k,int h){
        int cnt=0;
        for(int i=0;i<piles.size();i++)
            cnt+=(piles[i]%k==0)?piles[i]/k:(piles[i]/k)+1;
        
       return cnt<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int l=1;
       int r=1e9;
        
        while(l<r){
            int mid=l+(r-l)/2;
            if(isHeFinished(piles,mid,h))
                r=mid;
            else
                l=mid+1;
        }
       
            return l;
      
    }
};