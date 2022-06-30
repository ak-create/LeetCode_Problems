class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmx(n,0);
        vector<int>rightmx(n,0);
        int mx=height[0];
        leftmx[0]=height[0],rightmx[n-1]=height[n-1];
        for(int i=1;i<n;i++)
            leftmx[i]=max(height[i],leftmx[i-1]);
        for(int i=n-2;i>=0;i--)
            rightmx[i]=max(height[i],rightmx[i+1]);
        
        int ans=0;
        for(int i=1;i<n;i++)
        { 
            //cout<<height[i]<<" "<<leftmx[i]<<" "<<rightmx[i]<<endl;
            if(height[i]<leftmx[i] and rightmx[i]>height[i])
            {
                int mn=min(leftmx[i],rightmx[i]);
                ans+=(mn-height[i]);
            }
        }
       // cout<<endl;
        return ans;
    }
};