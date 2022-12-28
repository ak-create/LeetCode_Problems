class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        multiset<int>s;
        for(int i=0;i<piles.size();i++)
        {
            s.insert(-piles[i]);
        }
        while(k!=0)
        {
           auto it=s.begin();
            int x=*it;
            x=-x;
            x++;
            x/=2;
         //   cout<<*it<<" "<<-x<<endl;
            s.erase(it);
            s.insert(-x);
            k--;
        }
        int ans=0;
        auto it=s.begin();
        while(it!=s.end())
        {
          //cout<<*it<<" ";
            ans+=-(*it);
            it++;
        }
               
      //  cout<<endl<<endl;
        return ans;
    }
};