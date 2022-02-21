class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        auto it=mp.begin();
        while(it!=mp.end()){
            if(it->second>=(nums.size()+1)/2)
                return it->first;
       
        it++;}
   return 0; }
};