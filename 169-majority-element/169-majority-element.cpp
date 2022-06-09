class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int cnt=0;
      int ele=0;
        
        for(int num:nums)
        {    
             if(cnt==0)
                 ele=num;
            if(num==ele)
                cnt++;
            else
                cnt--;
        }
        return ele;
         }
};