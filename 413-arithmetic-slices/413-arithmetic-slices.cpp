class Solution {
public:
    /*
    1 2 3 4 5 8 9 10
    */
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        int cnt=1;
        int ans=0;
        int ap=nums[1]-nums[0];
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==ap){
                cnt++;
            }
            else{
                if(cnt>=2)
                    ans+=((cnt-1)*(cnt))/2;
                else
                    ans+=0;
                
                ap=nums[i]-nums[i-1];
                cnt=1;
            }
        }
          if(cnt>=2)
         ans+=((cnt-1)*(cnt))/2;
        
        return ans;
    }
};