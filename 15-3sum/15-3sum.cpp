class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     //    unordered_map<int,int>mp;
     // set<pair<int,pair<int,int>>>us;
         vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        // }
        for(int i=0;i<nums.size();i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i-1])) {
           int a=-nums[i],lo=i+1,hi=nums.size()-1;
           // cout<<a<<" ";
            while(lo<hi)
            {
                if(nums[lo]+nums[hi]>a)
                    hi--;
                else if(nums[lo]+nums[hi]<a)
                    lo++;
                else
                {
                    ans.push_back({nums[lo],nums[hi],-a});
                   lo++,hi--;
                    while(lo<hi and nums[lo]==nums[lo-1])
                        lo++;
                    while(lo<hi and nums[hi]==nums[hi+1])
                        hi--;
                   
                }
                    
            }
            }
            // i++;
            // while(i<nums.size() and nums[i]==-a)
            //     i++;
            
         
            }
               
    
    // for(auto it:us)
    // {
    //   //  cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    //     ans.push_back({(it.first),(it.second.first),(it.second.second)});
    // }
        return ans;
        
    }
};