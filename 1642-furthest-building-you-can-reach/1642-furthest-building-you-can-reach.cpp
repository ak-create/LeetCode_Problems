class Solution {
public:
    bool yes(vector<int>& h,long int bricks, int ladders,int ind)
    {
        if(ladders>=ind)return true;
       long int total_bricks=0;
        multiset<long int>s;
        for(int i=1;i<=ind;i++)
        {
            if(h[i]>h[i-1])
            {
                total_bricks+=(h[i]-h[i-1]);
                s.insert((h[i-1]-h[i]));
            }
            
        }
        long int cnt=0;
        // if(s.size()){
        auto it=s.begin();
        while(it!=s.end() and ladders--)
        {
            long int x=-(*it);
            cnt+=x;
            it++;
        }
        // }
       // cout<<ind<<" "<<cnt<<" "<<total_bricks<<endl;
        
        return ((total_bricks-cnt)<=bricks);
    }
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
      
        int l=0,r=h.size()-1;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(yes(h,bricks,ladders,mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
     //   cout<<endl;
        return ans;
        
    }
};