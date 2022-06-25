class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int incorr=0,pos=-1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                incorr++;
                pos=i;
            }
        }
       // cout<<endl;
        if(incorr>1)
            return false;
        
       else if(incorr==1 and (pos!=0 or pos!=n-1))
        {
          // cout<<"me1"<<endl;
            if(pos+1<n ){
            if(nums[pos-1]<=nums[pos+1])return true;
                
            else
            {
               // cout<<"me2"<<endl;
                if(pos-2>=0 and nums[pos-2]>nums[pos])
                    return false;
                else
                    return true;
            }
                
            }
           else 
               return true;
            
            // else
            // {
            //    // cout<<"me2"<<endl;
            //     if(pos-2>=0 and nums[pos-2]>nums[pos])
            //         return false;
            //     else
            //         return true;
            // }
        }
       else if((incorr==1 and (pos==0 or pos==n-1)) or (incorr==0))return true;
        
        else
            return false;
        
        //1 8 2 5
        //1 8 2 10
    }
};