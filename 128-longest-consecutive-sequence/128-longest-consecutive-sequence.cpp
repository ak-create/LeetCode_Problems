class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int num:nums)
            s.insert(num);
        int ans=0;
        int consc_no=1;
        for(auto it=s.begin();it!=s.end();it++)
        {
            auto it1=it++;
            if(it!=s.end())
            {
            if(*it1==(*it)-1)
                consc_no++;
            else
            {
               // ans=max(ans,consc_no);
                consc_no=1;   
            }
          }
             ans=max(ans,consc_no);
            it=it1;
        }
        return ans;
    }
};