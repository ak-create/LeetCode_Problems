class Solution {
public:
    bool isPowerOfFour(int n) {
     int cnt=0,ind=0;
       // n=abs(n);
       // cout<<n<<endl;
        for(int i=31;i>=0;i--)
        {
          //  cout<<(1<<i)<<" ";
            if(((1<<i)&n))
            {
                cnt++;
                ind=i;
            }
        }
        //cout<<endl;
        if(cnt==1 and ind%2==0)
            return true;
        else
            return false;
    }
};