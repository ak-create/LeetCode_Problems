class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        vector<int>pre(n,0),suff(n,0);
           map<int,int>mp1,mp2;
        pre[0]=nums[0];
        mp1[pre[0]]=0;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
            mp1[pre[i]]=i;
        }
        suff[n-1]=nums[n-1];
        mp2[suff[n-1]]=n-1;;
        for(int i=n-2;i>=0;i--){
           suff[i]=suff[i+1]+nums[i];
         mp2[suff[i]]=i;}
       
        
        int ans=1e7;
        for(int i=0;i<n;i++)
        {
            if(pre[i]==x)
                ans=min(ans,i+1);
            else if(pre[i]<x)
            {
                if(mp2.find(x-pre[i])!=mp2.end() and mp2[x-pre[i]]>i)
                    ans=min(ans,(n-mp2[x-pre[i]]+i+1));
            }
            else
                break;
            //cout<<ans<<" pre:"<<i<<endl;
        }
         for(int i=n-1;i>=0;i--)
        {
            if(suff[i]==x)
                ans=min(ans,n-i);
            else if(suff[i]<x)
            {
                if(mp1.find(x-suff[i])!=mp1.end() and i>mp1[x-suff[i]])
                    ans=min(ans,(n-i+mp1[x-suff[i]]+1));
            }
            else
                break;
             
             //cout<<ans<<" suff:"<<i<<endl;
        }
        if(ans!=1e7)
        return ans;
        else
            return -1;
        
        
    }
};