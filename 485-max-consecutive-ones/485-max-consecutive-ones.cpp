class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int mxcnt=0,j=0,cnt=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]==1){
            int j=i+1;
            while(j<n and a[i]==a[j])
                j++;
                
                mxcnt=max(mxcnt,j-i);
                i=j-1;
                }
           
        }
        // if(cnt>0)
        //  mxcnt=max(mxcnt,cnt+1);
        return mxcnt;
    }
};